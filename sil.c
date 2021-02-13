#include <stdio.h>
#include <conio.h>


/*int main(){

int i ,sayi,ort=0; //degiskemlerimiz tanımladık

    printf("Enter a Number:");
    scanf("%d",&sayi);
    

    while (sayi>=1) //sayi 1 e eşit ve büyük olana kadar döngü devam edecek
    {
        i = sayi%10; // önce sayinin birler basamğındaki rakamı alıyoruz
        printf("%d\n",i);
        sayi = sayi/10; // sayiyi tekrar 10' na böldük.
         printf("%d\n",sayi); 

    }

    getch();
    return 0;
}*/

int eksikbul(int dizi[]){
     int size = sizeof dizi; // dizinin boyutunu aldık.
     int i,j,n;
    //int dizi[7] = {1,2,6,4,7,8,3};
    printf("boyut: %u\n",size-1);
    for(i=0;i<size-1;i++){
        
        for(j=i+1;j<size-1;j++)
        {
            if(dizi[i]>dizi[j]){
                n = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = n;
            }
        }
    }
for (i=0;i<size-2;i++)
{
    //printf("%d",dizi[i]);
    if(dizi[i]-dizi[i+1] != -1)
    { 
        printf("eksik deger: %d",(dizi[i]+1));
    }
}

 }
int main(){
    int dizi[] = {10,12,16,14,17,18,13,11};

    eksikbul(dizi);

    getch();
    return 0;
}