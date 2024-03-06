#include <stdio.h>
#include <conio.h>
 
int main() {
    int asayisi = 0, bsayisi = 0, csayisi = 0, fsayisi = 0, toplamharfsayisi = 0, toplam = 0;
    float ortalama = 'x'; // Kullanýlmayan bir deðer.
    char Not = 0;
    while (Not != 'H' && Not != 'h') {
        printf("Harf notunu giriniz (Cikis icin H ya da h giriniz) :");
        Not = _getch();
        printf("\nGirilen karakter: %c\n", Not);
        switch (Not) {
        case 'A':
            asayisi += 1;
            toplam += 4.0;
            break;
        case 'B':
            bsayisi += 1;
            toplam += 3.0;
            break;
        case 'C':
            csayisi += 1;
            toplam += 2.0;
            break;
        case 'F':
            fsayisi += 1;
            toplam += 0;
            break;
        case 'H': case 'h': break;
        default:
            printf("Gecersiz Not! (%c)\n", Not);
            break;
        }
    }
    printf("---------------------------------------\n");
    toplamharfsayisi = asayisi + bsayisi + csayisi + fsayisi;
    ortalama = (float)toplam / toplamharfsayisi;
    printf("Girilen A larin sayisi:\t%d\n", asayisi);
    printf("Girilen B larin sayisi:\t%d\n", bsayisi);
    printf("Girilen C larin sayisi:\t%d\n", csayisi);
    printf("Girilen F larin sayisi:\t%d\n", fsayisi);
    printf("Toplam harf sayisi:\t%d\n", toplamharfsayisi);
    printf("Ortalama:\t%.2f\n", ortalama);
    return 0;
}
