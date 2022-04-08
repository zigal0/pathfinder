void main() {
    int a[100];
    int b[100];
    int c[100];
    int d[100];
    int e[100];
    for (int i = 1; i < 100; ++i) {
        a[i] = b[i] + c[i];
        d[i] = e[i] - a[i - 1];
    }
}