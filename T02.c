#include <stdio.h>

int main() {

    int N;

    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    int nilai[N];  // N sebagai wadah untuk menyimpat jumlah data 

    for(int i = 0; i < N; i++) {            // artinya dia harus mengulang sebanyak N kali,indeks array dimulai dari 0 sampai n-1
        printf("Masukkan nilai ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
    }

    int kode_kelompok;
    printf("Masukkan kode kelompok (1 atau 2): ");
    scanf("%d", &kode_kelompok);

    int total = 0;
    int jumlah_kelompok = 2;

    for(int i = 0; i < N; i++) {
        if(i % jumlah_kelompok == (kode_kelompok - 1)) {     // sisa pembagian
            total += nilai[i];
        }
    }

    printf("Total nilai kelompok %d adalah: %d\n", kode_kelompok, total);

    return 0;
}