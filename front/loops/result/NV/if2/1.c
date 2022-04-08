void main() {
    int a[512];
    for (int i = 0; i < 512; ++i) {
        if (a[i] > 0) {
            if (a[i] > 10) {
                a[i] *= 5;
            } else {
                a[i] *= 6;
            }
        } else {
            a[i] = 1;
        }
    }
}
