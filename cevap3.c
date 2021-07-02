#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int *sayilar;
    float geo_ort;
    int toplam=1;
    int i;

    sayilar = malloc(5*sizeof(int));
    
    for (i = 0; i <5; i++)
    {
        printf("%d sayi gir:",i+1);
        scanf("%d",&sayilar[i]);
        if (sayilar[i]<0)break;
        
        toplam = toplam*sayilar[i];
    }
    geo_ort = pow(toplam,1.0/i);

    printf("geo_ort: %.2f",geo_ort);

    getch();
    return 0;
}