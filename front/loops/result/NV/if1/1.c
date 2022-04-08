void main() {
    int a[42];
    for (int i = 0; i < 42; i++) {
        if (a[i] > 0) {
            a[i] = a[i] * 5;
        } else if (a[i] < 0) {
            a[i] = a[i] * 3;
        } else {
            a[i] = 1;
        }
    }
}
