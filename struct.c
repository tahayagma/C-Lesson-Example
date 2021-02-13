#include <stdio.h>
#include <conio.h>
/*struct ile yapı oluşturulur

struct kutuphane
{
    char kitapAd[50];
    char yazar[50];
    char tur[20];
    int fiyat;
};

struct kutuphane kitap1 = {"karayip korsanlar","Jony Deep","macera",25};

kütüphane sistemi gibi düşünülebilir.

typedef ile bir değişken oluşturulu ve ondan  istenildiği kadar değişken oluşturulur.

 typedef int sayilar;

 sayilar sayi1;
 sayilar sayi2  şeklinde değişkenler oluşturulabilir.

*/


int main(){


    int sayi = 10;
    int *d = &sayi;// bu şekilde bir değişkene de atayabiliriz.
    printf("%x",&sayi);
    printf("\n--------");
    printf("%x",d);





    getch();
    return 0;
}