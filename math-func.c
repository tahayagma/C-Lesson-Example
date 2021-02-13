#include <stdio.h>
#include <conio.h>
/*
sqrt ile karekökünü alırız.
pow(sayi,2) sayinin 2 dereceden üssünü alır.
floor(sayi) ile 12.285 gibi bir sayiyi aşağı yani 12 ye yuvarlar
ceil(sayi)  ile de yukarı yuvarlar  %.lf
fabs(sayi) sayının mutlar değerini almış oluruz. %.lf ile kullanılır
log(sayi) sayının logaritmasını alır%.lf
sinus
*/
int main(){

    double derece,sinso,cosso;
    printf("derece:");
    scanf("%lf",&derece);

    //sinso = sin(derece);
    printf("Sinus: %lf\n",sinso);

    cosso = cos(derece);
    printf("Cosinsus: %lf",cosso);

    getch();
    return 0;
}