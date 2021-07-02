#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
    char metin[100], ktr;
    //char harf;
    int i, c, end=0, karekter =0, kelime=1,sayac = 0,counter = 0;
    int sayilar[3]={0}; //0 => harf , 1=> rakam , 2=>digerleri

    printf("Metin giriniz:");
    gets(metin);

    while(metin[sayac] != '\0')
    {
    if(metin[sayac]==' ')
    kelime++;
    sayac++;
    }
    printf("toplam kelime sayisi= %d\n", kelime); 


    while(metin[counter] != 0)
    {
        char karakter1 = metin[counter];
        if( (karakter1>='a' && karakter1<='z') || (karakter1>='A' && karakter1<='Z'))
        sayilar[0]++;
        else if(karakter1>='0' && karakter1<='9')
        sayilar[1]++;
        else
        sayilar[2]++;
        counter++;
    }
    printf("Toplam harf sayisi = %d\nToplam rakam sayisi = %d\nToplam ozel karakter sayisi= %d",sayilar[0],sayilar[1],sayilar[2]);


    getch();
    return 0;
}