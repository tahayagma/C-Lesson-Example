#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define basla 10
    // SORU-4 YAS HESAPLAMA
    struct zaman
{
             char kisi ;
      int y ;
      int a ;
      int g ;
};
    
//SORU 3 TEKRAR EDEN HARFLERİ BUL
void frekansyazdir(int say[])
{
    for (int i = 0; i < 26; i++) {
  
        
        if (say[i] != 0 && say[i]>1)
        {
            printf("%c - %d\n",i + 'a', say[i]);
        }
    }
}
  

void cumle_analiz(char cumle[])
{
    int i = 0;
  
   
    int harf[26] = { 0 };
  
   
    while (cumle[i] != '\0') {
  
        
        harf[cumle[i] - 'a']++;
  
       
        i++;
    }
  
    frekansyazdir(harf);
}

int main(){


    //SORU-1  SAYI ÖTELEME
    int dizi[4] = {10,20,30,40};
    int i,j,ilk;
    int n = 1;
    int yeni_dizi[] = {};
    ilk = dizi[0];
    while (n<4)
    {   
        yeni_dizi[n-1] = dizi[n];
        n++;

    }
    yeni_dizi[3] = ilk;
    for (i = 0; i < 4; i++)
    {
        printf("%d",yeni_dizi[i]);
    }


    //SORU-2 ROMA RAKAMLARINA ÇEVİRME
    int sayi;
    printf("lutfen bir sayi girin:");
    scanf("%d",&sayi);

    while (sayi!=0)
    {
        if(sayi>=1000)
        {
            printf("M");
            sayi -= 1000;
        }

        else if (sayi>=900)
        {
            printf("CM");
            sayi -=900;
        }

        else if (sayi>=500)
        {
            printf("D");
            sayi -=500;
        }

        else if (sayi>=400)
        {
            printf("CD");
            sayi -=400;
        }

        else if (sayi>=100)
        {
            printf("C");
            sayi -=100;
        }

        else if (sayi>=90)
        {
            printf("XC");
            sayi -=90;
        }

        else if (sayi>=50)
        {
            printf("L");
            sayi -=50;
        }

        else if (sayi>=40)
        {
            printf("XL");
            sayi -=40;
        }

        else if (sayi>=10)
        {
            printf("X");
            sayi -=10;
        }

        else if (sayi>=9)
        {
            printf("IX");
            sayi -=9;
        }

        else if (sayi>=5)
        {
            printf("V");
            sayi -=5;
        }

        else if (sayi>=4)
        {
            printf("IV");
            sayi -=4;
        }

        else if (sayi>=1)
        {
            printf("I");
            sayi -=1;
        }
        
    }

    //SORU 3 TEKRAR EDEN FARFLERİ BUL
    char cumle[100] ;
    printf("cumle girin:");
    gets(cumle);
    cumle_analiz(cumle);



    //SORU 3 TEKRAR EDEN SAYILARI BUL
    long long sayi, n;
    int i, son_sayi;
    int say[basla];

    printf("sayi degeri giriniz: ");
    scanf("%lld", &sayi);

    for(i=0; i<basla; i++)
    {
        say[i] = 0;
    }

    n = sayi; 

    while(n != 0)
    {
        son_sayi = n % 10;

        n /= 10;
        
        say[son_sayi]++;
    }

    for(i=0; i<basla; i++)
    {
        if (say[i]>1)
        {
           printf("%d degeri  %d kez tekrar ediyor\n", i, say[i]);
        }
        
    }
    
    /*SORU-4 YAS HESAPLAMA
int main(void)
{
      struct zaman z1 , z2;
      struct zaman fark;
 
 
      printf ("\n kisinin adini giriniz : " ); scanf("%d ", & z1.kisi); fflush (stdin);
      printf("\n bugunun tarihi giriniz : ");
      printf("\n gun  : "); scanf("%d",& z1.g ); fflush(stdin);
      printf(" ay : "); scanf("%d",& z1.a ); fflush(stdin);
      printf(" yil : "); scanf("%d",& z1.y ); fflush(stdin);
 
      
      printf("\n dogum gununu giriniz : ");
      printf("\n gun  : "); scanf("%i",& z2.g ); fflush(stdin);
      printf(" ay : "); scanf("%i",& z2.a ); fflush(stdin);
      printf(" yil : "); scanf("%i",& z2.y ); fflush(stdin);
       
 
     fark.y = z1.y - z2.y ;
      fark.a= z1.a - z2.a ;
      fark.g = z1.g - z2.g ;
 
      if( fark.g <=0  )
      {
        fark.a = fark.a-1;
        fark.g = fark.g+ 30 ;
      }
 
      if( fark.a <= 0 )
      {
        fark.y= fark.y - 1;
        fark.a = fark.a + 12;
      }
 
      printf("\n kisinin  yasi %d y, %d a, %d g " ,fark.y ,fark.a , fark.g );
    }*/
    
    


    getch();
    return 0;
}
