#include <stdio.h>
#include <conio.h>

// void ile geriye değer döndürmeyen fonskiyonları tanımlıyoruz.

int toplam(int sayi1,int sayi2){
    int s3;

    s3 = sayi1+sayi2;
    return s3;

}


int main(){

    int t;
    t = toplam(4,10);
    printf("%d",t);

    getch();
    return 0;
}