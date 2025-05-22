#include <stdio.h>

// Fungsi untuk menghitung total jam tidur
int totalTidur(int tidur[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += tidur[i];
    }
    return total;
}

// Fungsi untuk menghitung rata-rata jam tidur
float rataTidur(int tidur[], int n) {
    return (float)totalTidur(tidur, n) / n;
}

int main() {
    int tidur[7];  // array untuk menyimpan jam tidur 7 hari
    char* hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

    printf("JAM TIDUR KAMU UDAH CUKUP BELUM YA...?\n");

    // Input jam tidur setiap hari
    for (int i = 0; i < 7; i++) {
        printf("Jam tidur hari %s: ", hari[i]);
        scanf("%d", &tidur[i]);

        // Input tidak bisa negatif
        while (tidur[i] < 0) {
            printf("Jam tidur tidak boleh negatif. Silakan masukkan lagi.\n");
            printf("Jam tidur hari %s: ", hari[i]);
            scanf("%d", &tidur[i]);
        }
    }

    // Hitung total dan rata-rata
    int total = totalTidur(tidur, 7);
    float rata = rataTidur(tidur, 7);

    // Tampilkan hasil
    printf("\nTotal jam tidur dalam seminggu: %d jam\n", total);
    printf("Rata-rata jam tidur per hari: %.2f jam\n", rata);

    // Evaluasi kebiasaan tidur
    if (rata >= 7) {
        printf("Wah bagus! bisa tidur teratur itu nikmat, pertahanin terus jam tidur kamu yaa!.\n");
    } else {
        printf("Waduh 'Kapan terakhir kali kamu dapat tertidur tenang?', Tugasmu lagi banyak kah? Jangan keseringan begadang yaa!.\n");
    }

    return 0;
}
