#include <stdio.h>
#include <conio.h>

//define puan 4.58 gibi bir derğer atarsam puanı pgogram için nerde
// kullanırsam kullanayım 4.58 olarak tanımlanmış olur.
int main(){
    printf("MENU\n");
    printf("***************\n");
    printf("1.Toplama\n");
    printf("2.Carpma\n");
    printf("3.Karesini al\n");
    printf("4.Kup bul\n");
    printf("5.Denklem Coz(5x^2+4x+3)\n\n");
    int islem;
    int sayi1 ,sayi2;

    wile:
    printf("Lutfen islem sec:");
    scanf("%d",&islem);

    printf("\nSecilen islem: %d\n",islem);


    switch (islem)
    {
    case 1:
        printf("Sayi1 gir:");
        scanf("%d",&sayi1);
        printf("Sayi2 gir:");
        scanf("%d",&sayi2);


        printf("Toplama islemi sonucu: %d",sayi1+sayi2);

        break;
    case 2:
        printf("Sayi1 gir:");
        scanf("%d",&sayi1);
        printf("Sayi2 gir:");
        scanf("%d",&sayi2);


        printf("Carpma islemi sonucu: %d",sayi1*sayi2);
        break;

    case 3:
        printf("Sayi gir:");
        scanf("%d",&sayi1);
        printf("Sayinin Karesi: %d",sayi1*sayi1);
        break;

    case 4:
        printf("Sayi gir:");
        scanf("%d",&sayi1);

        printf("Sayinin Kupu: %d",sayi1*sayi1*sayi1);
        break;
        


    case 5:
        printf("Denklem = 5x^2+4x+3\n\n");

        printf("Denklem icin X degeri gir:\n");
        scanf("%d",&sayi1);

        printf("Denklemin sonucu: %d\n",(5*sayi1*sayi1)+(4*sayi1)+3);
        break;
    }



    getch();
    return 0;

}