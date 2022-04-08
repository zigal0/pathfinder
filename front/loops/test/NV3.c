void main() {
    int a[100];
    for (int i = 2; i < 99; ++i) {
        a[i] = a[i - 1] + a[i] + a[i+1];
    }
}