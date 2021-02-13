#include <stdio.h>
#include <conio.h>


//Güçlü Sayi Bulma
/* int guclu_sayi(int n){
    int i,j,sayi,factoriyel = 1;
    int toplam = 0;
    sayi = n;

    while (sayi>=1)
    {
        i = sayi%10;
        //printf("%d\n",i);
        sayi= sayi/10;
        for (j=i;j>=1;j--)
        {   
            factoriyel *= j; 
        }
        toplam = toplam+factoriyel;
        factoriyel = 1;
    }

    //printf("%d",factoriyel);
    printf("\ntoplam:%d",toplam);

    if (toplam == n)
    {
        printf("\n%d sayisi guclu bir sayidir",n);
    }
    else
    {
        printf("\n%d sayisi guclu bir sayi degildir.",n);
    }
    
}
int main(){

    guclu_sayi(451);


    getch();
    return 0;
} */


//Pik İndex Değeri Bulma
/*
int main(){

int dizi[9] = {5,12,13,20,16,19,11,7,25};
int i,k,j;
int fark[9];
int index = 0;

/* for (i=0;i<8;i++)
{
    k = dizi[i]-dizi[i+1];
    printf("%d-%d\n",dizi[i],dizi[i+1]);
    fark[i] = k;
}
printf("farklar-----------------\n");
for(j=0;j<8;j++)
{
    printf("%d\n",fark[j]);
}
-----------------------------------------
for(i=0;i<8;i++){
    
    if(dizi[i]==20){
        printf("%d",i);
    }
}
    getch();
    return 0; 
}*/

//Eksik değer bulma
 int eksikbul(int dizi[],int boy){
     int i,j,n;
    //int dizi[7] = {1,2,6,4,7,8,3};
    //printf("boyut: %u\n",boy-1);
    for(i=0;i<boy;i++){
        
        for(j=i+1;j<boy;j++)
        {
            if(dizi[i]>dizi[j]){
                n = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = n;
            }
        }
    }
for (i=0;i<boy-1;i++)
{
    //printf("%d",dizi[i]);
    if(dizi[i]-dizi[i+1] != -1)
    { 
        printf("eksik deger: %d",(dizi[i]+1));
    }
}

 }
int main(){
    int dizi[] = {12,16,14,17,18,13};
    int boy = sizeof(dizi)/4;
    eksikbul(dizi,boy);

    getch();
    return 0;
}

//Peak Element
/*int pikbul(int dizi[], int dusuk, int yuksek, int n)
{   int a;

    int mid = (dusuk + yuksek) / 2;
    if ((mid == 0 || dizi[mid - 1] <= dizi[mid]) &&
        (mid == n - 1 || dizi[mid + 1] <= dizi[mid]))
        return mid;

    if (mid - 1 >= 0 && dizi[mid - 1] > dizi[mid])
        return pikbul(dizi, dusuk, mid - 1, n);

    return pikbul(dizi, mid + 1, yuksek, n);
}
 
int main()
{   
    int i;
    int dizi[] = {5,12,13,20,16,19,11,7,25};
    int n = (sizeof dizi)/4; //sizeof(A) / sizeof(A[0]) seklinde de yapılabilir.
    int index = pikbul(dizi, 0, n - 1, n);
    printf("ilk pik degeri %d ve index degeri: %d", dizi[index],index);
    
    
    getch();
    return 0;
}*/






