#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
/*struct tarih
{
    int gun,ay,yil;
};
struct kisiler
{
    char adi[100];struct tarih dogum;
};*/




int main(){

//CEVAP-1 
    /*int orjinal[] = {10,20,30,40,50,60,70,80,90,100,110};
    int i;
    int dizi_boyut = sizeof(orjinal)/4;
    int yeni[dizi_boyut];
    
    for (i = 1; i <dizi_boyut; i++)
    {
        yeni[i-1] = orjinal[i];
    }
    yeni[dizi_boyut-1] = orjinal[0];

    for(i = 0; i<dizi_boyut;i++)
    {
        printf("%d ",yeni[i]);
    }*/
    
    
//CEVAP-2
    /*int Roma(int sayi){
        int dizi[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        char roma[13][3] = {"I\0","IV\0","V\0","IX\0","X\0","XL\0","L\0","XC","C\0","CD\0","D\0","CM\0","M\0"};
        int i = 12;
        while (sayi!=0)
        {   
            while (i>=0)
            {
                if (sayi>= dizi[i])
                {   
                    printf("%s",roma[i]);
                    sayi = sayi-dizi[i];
                    //printf("  sayi:%d\n",dizi[i]);
                }
                else --i;
            }
        }

    }
    
    int sayi;
    while (1==1)
    {
        printf("\nbir sayi gir:");
        scanf("%d",&sayi);
        Roma(sayi);
    }*/
    
    
//CEVAP-3
    /*TEKRAR EDEN SAYI SAYACI
    int l = 0;
    int rakam;
    long long int sayi;
    int i,j,counter=0;
    printf("Bir sayi dizisi girin:");
    scanf("%lld",&sayi);
    int N  = sayi;

    //--------sayıların uzunluğunu elde ettik--------------------
    while (N!=0)
    {
        N%10;
        l++;
        N = N/10;
    }
    int dizi[l];
    printf("lenght:%d\n",l);


    //---------Aldığımız sayıları diziye aktardık-----------------
    for (i = 0; i<l; i++)
    {
        rakam = sayi%10;
        dizi[i] = rakam;
        sayi = sayi/10;
    }

    

    //-------------Tekrar edilen rakamları bulup yazdırdık-------------------
    printf("\ndizilenmis veriler\n");
    //int new[21]= {2,3,3,5,3,4,1,7,7,7,7,6,8,8,8,8,8,8,8,9,9};
    int rakamlar[10] = {0,1,2,3,4,5,6,7,8,9}; 

    for(i=0;i<sizeof(rakamlar)/4;i++)
    {  
        for(j = 0;j<l;j++)
        {
            if(rakamlar[i] == dizi[j])
            {   
                counter++;
            }
        }
        if (counter>1)
        { 
            printf("%d sayisi %d kez tekrarlanmistir.\n",rakamlar[i],counter);
        }
        counter= 0;
    }*/

    /*TEKRAR EDEN HARF SAYACI
   char yazi[100];
   int sayac = 0, tekrar[26] = {0}, x;

   printf("yazi dizisi gir:");
   gets(yazi);
   while (yazi[sayac] != '\0') { //burada boşluk karakterini göz ardı ettik.

      if (yazi[sayac] >= 'a' && yazi[sayac] <= 'z') {
         x = yazi[sayac] - 'a';
         tekrar[x]++;
      }

      sayac++;
   }

   for (sayac = 0; sayac < 26; sayac++)
   {
       if (tekrar[sayac]>1)
       {
           printf("%c harfi %d kez tekrarlanmistir.\n", sayac+ 'a' ,tekrar[sayac]);
       }
       
   }*/



//CEVAP-4
    /*time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int m_gun=tm.tm_mday;
    int m_ay=tm.tm_mon+1;
    int  m_yil= tm.tm_year+1900;

    int kisi_sayi;
    char adi[100];
    printf("kac kisinin bilgisini gireceksiniz:");
    scanf("%d",&kisi_sayi);
    struct kisiler kisi[kisi_sayi+1];

    for (int n= 1; n <=kisi_sayi; n++)
    { 
        
        printf("%d.kisinin adi:",n);
        scanf("%s",&kisi[n].adi);
        printf("%s dogum tarihi:",kisi[n].adi);
        scanf("%d.%d.%d",&kisi[n].dogum.gun,&kisi[n].dogum.ay,&kisi[n].dogum.yil);
    }
    printf("-----------------------------------------\n");
    for (int  i = 1; i <=kisi_sayi; i++)
    {
        if (kisi[i].dogum.gun>m_gun)
        {
            m_gun= m_gun+30;
            m_ay = m_ay-1;
        }
        if(kisi[i].dogum.ay>m_ay)
        {
            m_ay=m_ay+12;
            m_yil = m_yil-1;
        }
        printf("%s yasi:%d yil %d ay %d gun\n",kisi[i].adi,(m_yil-kisi[i].dogum.yil),(m_ay-kisi[i].dogum.ay),(m_gun-kisi[i].dogum.gun));
    }*/



    getch();
    return 0;
}
