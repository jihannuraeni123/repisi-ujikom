#include <stdio.h>

float hitung_rata_rata(int angka[], int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += angka[i];
    }
    return (float)jumlah / n;
}

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int n = 5;
    
    float rata_rata = hitung_rata_rata(angka, n);
    printf("Rata-rata: %.2f\n", rata_rata);
    
    return 0;
}
