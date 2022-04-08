void foo() {}

void main() {
    int a[4096];
    for (int i = 0; i < 4096; ++i) {
        a[i] = a[i] * 3;
        foo();
    }
}
