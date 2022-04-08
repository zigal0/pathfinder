void main() {
    int a[4096];
    int b[4096];
    for (int i = 0; i < 4096; ++i) {
        a[i] += b[i];
        if (a[i] > 0) {
            break;
        }
    }
}
