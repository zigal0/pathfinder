import re
import lexer
import os, sys

def get_function_args(arg_str):
    spl = arg_str.split(",")
    return spl


def parse_function_call_args(item):
    if item['exp'] == assign_function_call:
        arg_list = get_function_args(item['format']['arguments'])
        return arg_list
    return None


def parse_function_def_args(st):
    arg_list = get_function_args(st)
    if len(arg_list[0]) == 0:
        return arg_list
    return [pos.split()[-1][1:]
            if pos.split()[-1][0] == '*'
            else pos.split()[-1]
            for pos in arg_list] # maybe should be rewritten -- pointer matters...

#===================================================================================

pattern=r'^([a-zA-Z_*$][a-zA-Z_*$0-9]*\s+)+([a-zA-Z_*$][a-zA-Z_*$0-9]*)\s*\((.*)\)'

def search_pattern(pattern, lines, fname):
	res = list()
	for loc, string in enumerate(lines):
		r = re.findall(pattern, string)
		if r != []:
			res.append((fname, loc, r))
	return res


def extract_func_def_list(fname):
	with open(fname) as f:
		lines = f.readlines()
		res = search_pattern(pattern, lines, fname)
		return res
#===================================================================================

if __name__ == '__main__':
	"""
	test
	"""
	import pprint
	fl = extract_func_def_list(sys.argv[1])	
	arg_names = [parse_function_def_args(it[-1]) for it in [el[-1] for el in [item[-1] for item in fl]]]
	func_names =[parse_function_def_args(it[-2]) for it in [el[-1] for el in [item[-1] for item in fl]]]
	pprint.pprint(arg_names)
	print(func_names)
