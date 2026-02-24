#include <stdio.h>
#include <string.h>

int main() {
    char kode[5];
    int porsi;
    int harga;
    int subtotal;
    int total = 0;

    printf("Menu\t\tPorsi\tHarga\tTotal\n");
    printf("========================================\n");

    while (1) {
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &porsi);

        if (strcmp(kode, "NP") == 0) {
            harga = 25000;
            printf("Nasi Padang\t");
        }
        else if (strcmp(kode, "RD") == 0) {
            harga = 30000;
            printf("Rendang\t\t");
        }
        else if (strcmp(kode, "AG") == 0) {
            harga = 22000;
            printf("Ayam Goreng\t");
        }
        else {
            printf("Kode salah\n");
            continue;
        }

        subtotal = harga * porsi;
        total += subtotal;

        printf("%d\t%d\t%d\n", porsi, harga, subtotal);
    }

    printf("========================================\n");
    printf("Total Pembayaran : %d\n", total);

    // Diskon
    double diskon = 0;

    if (total >= 500000) diskon = 0.25;
    else if (total >= 400000) diskon = 0.20;
    else if (total >= 300000) diskon = 0.15;
    else if (total >= 200000) diskon = 0.10;
    else if (total >= 100000) diskon = 0.05;

    int potongan = total * diskon;
    int totalBayar = total - potongan;

    printf("Diskon           : %d\n", potongan);
    printf("Total Bayar      : %d\n", totalBayar);

    return 0;
}

