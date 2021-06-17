#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
int sayac=0;

    int i;

    int a,b,c;

    for(i=100;i<=999;i++)
    //3 basamaklı olduğu için 100 ile 999 arasında oluyor
    {
        a = i/100;
        // 100 ile bölümündn bize yüzler basamığını verir
        b  = (i/10)%10;
        // onları basamağı için 10 bölüm sonra 10 göre modunu aldığımız zaman bize 10lar basamığını verir.
        c = i%10;
        // sayının 10 göre modu ise bize birler basamığını verir

        if(a!=b && a!=c && c!=b)
        {
            sayac++;
        }
    }
    printf("%d",sayac);


----------------------ARADAKİ SAYILARI TOPLAMA İŞLEMİ---------------------------
 int sayi1,sayi2,buyuk,kucuk,toplam,i;

    yeniden:
    printf("Sayi1:");
    scanf("%d",&sayi1);

    printf("Sayi2:");
    scanf("%d",&sayi2);

    if(sayi1 == sayi2)
    {
        goto yeniden;
    }
    else
    {
        if(sayi1>sayi2)
        {
            buyuk = sayi1;
            kucuk = sayi2;
        }
        else
        {
             kucuk = sayi1;
             buyuk = sayi2;

        }
        
    }
    for(i=kucuk;i<=buyuk;i++)
    {
        toplam +=i;
    }
    printf("%d",toplam);

*/

int main() {

   int sayi,a,b,c,toplam;
   printf("Sayi:");
   scanf("%d",&sayi);
   a = sayi/100;
   b = (sayi/10)%10;
   c = sayi%10;
   toplam = a+b+c;

   printf("Toplam: %d",toplam);
    

    getch();
    return 0;
}
