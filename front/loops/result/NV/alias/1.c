void sum(int* a, int* b, int* c, long unsigned int N) {
    for (long unsigned int i = 0; i < N; ++i) {
        c[i] = a[i] + b[i];
    }
}

void main() {
    int a[512];
    int b[512];
    int *a1 = a;
    int *a2 = a + 1;
    sum(a1, b, a2, 256);
    // a[i] = a[i-1] + b[i] - RAW
}