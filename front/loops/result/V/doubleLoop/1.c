void main() {
    int a[512][512];
    int b[512][512];
    int c[512][512];
    for (int i = 0; i < 512; ++i) {
        for (int j = 0; j < 512; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}