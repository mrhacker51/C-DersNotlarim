#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    system("color c");
    setlocale(LC_ALL, "Turkish");
    int secim;
    int bakiye = 1000;
    int tutar;


    printf("\1-Para Cek\n2-Bakiye Sorgula\n3-Para Yatır\n");
    printf("Secim Giriniz : ");
    scanf("%d",&secim);

    switch(secim){
        case 1:
            printf("Bakiyeniz : %d",bakiye);
            printf("\nCekmek İstediginiz Tutarı Giriniz : ");
            scanf("%d",&tutar);

            if (tutar > bakiye){
                printf("\nCekmek İstediginiz Tutar : ",tutar);
                printf("\nBakiye Yetersiz");
                printf("\nBakiyeniz : %d",bakiye);
                break;
            }
            else if (tutar > 0){
                printf("\nParaniz Cekiliyor");
                printf("\nCekilen Tutar : %d",tutar);
                bakiye -= tutar;
                printf("\nKalan Bakiyeniz : %d",bakiye);
                break;

            }

            else{
                printf("\nHatalı Talep");
                break;

            }

        case 2:
            printf("\nBakiyeniz : %d",bakiye);
            break;

        case 3:
            printf("\nŞuanki Bakiyeniz : %d",bakiye);
            printf("\nYatırmak İstediginiz Tutarı Giriniz : ");
            scanf("%d",&tutar);

            if (tutar > 0){
                printf("\nParaniz Yatiriliyor");
                printf("\nYatırılan Tutar : %d",tutar);
                bakiye += tutar;

                printf("\nHesabınızın Yeni Bakiyesi : %d",bakiye);
                printf("\nBizi Tercih Ettiginiz İçin Tesekkürler");
                break;
            }


            else{
                printf("Yatirmak İstediginiz Tutar Hatalı");
                break;
            }


        default:
            printf("\nHatalı Bir İslem Yaptınız");
            break;


    }
    }
