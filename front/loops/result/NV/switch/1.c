void main() {
    int a[42];
    for (int i = 0; i < 42; i++) {
        int check = i % 3;
        switch (check)
        {
        case 0:
            a[i] = a[i] * 1;
            break;
        case 1:
            a[i] = a[i] * 2;
            break;
        case 2:
            a[i] = a[i] * 3;
            break;
        }
    }
}
