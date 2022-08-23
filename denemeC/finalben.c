#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/* int EB(int *dizi,int n);
int EK(int *dizi,int n); */



int main(){

    //CEVAP-2 BEN
    int sayiAdedi;
    int teksayilar = 0;
    int ciftsayilar = 0;
    while (1==1)
    {
        printf("sayi adedini giriniz:");
        scanf("%d",&sayiAdedi);
        if (sayiAdedi>50)
        {
            printf("50'den kucuk sayi adedi giriniz.\n");
        }
        else
        {   int dizi[sayiAdedi];
            for (int i = 0; i <sayiAdedi; i++)
            {
                printf("%d sayiyi girin:",i+1);
                scanf("%d",&dizi[i]);
            }

            for (int i = 0; i <sayiAdedi; i++)
            {   
                if (dizi[i]%2 == 0)
                {
                    ciftsayilar++;
                }

                else
                {
                    teksayilar++;
                }
            }
            printf("\nTek sayi adedi: %d\n",teksayilar);
            printf("cift sayi adedi: %d\n\n",ciftsayilar);
        }
    }


    //CEVAP 2 MAT
   /*  int sayiAdedi;
    int tekToplam = 0;
    int ciftToplam = 0;

    printf("Toplam sayi adedini gir:");
    scanf("%d",&sayiAdedi);
    if (sayiAdedi>50)
    {
        printf("50'den kucuk sayi adedi giriniz.\n");
    }
    else
    {   int dizi[sayiAdedi];
        for (int i = 0; i <sayiAdedi; i++)
        {
            printf("%d sayiyi girin:",i+1);
            scanf("%d",&dizi[i]);
        }

        for (int i = 0; i <sayiAdedi; i++)
        {   
            if (dizi[i]%2 == 0)
            {
                ciftToplam++;
            }

            else
            {
                tekToplam++;
            }
        }
        printf("\nCift sayi adedi: %d\n",ciftToplam);
        printf("Tek sayi adedi: %d",tekToplam);
    } */


    //CEVAP - 3 BEN
    /* int n;

    printf("dizi uzunlugu gir:");
    scanf("%d",&n);
    
    int dizi[n];
    for (int i = 0; i < n; i++)
    {
        printf("dizinin %d. elemaninini gir:",i+1);
        scanf("%d",&dizi[i]);
    }
    
    int *ptr1;
    ptr1 = dizi;
    EB(ptr1,n);
    EK(ptr1,n); */
    

    getch();
    return 0;
}

//CEVAP-3 BEN
/* int EB(int *dizi,int n)
{
    int enb;

    enb = dizi[0];

    for (int i = 1; i < n; i++)
    {
        if (enb<=dizi[i])
        {
            enb = dizi[i];
        }
           
    }
    

    printf("\nEn buyuk deger = %d",enb);
}


int EK(int *dizi,int n)
{   
    printf("ek dizi boyu: %d",sizeof(dizi));
    int enk;
    enk = dizi[0];

    for (int i = 1; i < n; i++)
    {
        if (enk>=dizi[i])
        {
            enk = dizi[i];
        }
    }
    printf("\nen kucuk deger: %d",enk);
     
} */


