
#include <stdio.h>
#include <conio.h>


int main(){

    /*int dizi[5] =
    int i,j;
    int toplam =0;
    int aranan = 10;
    for(i=0;i<=9;i++)
    {
        printf("Dizinin %d. index verisini gir:",i);
        scanf("\n%d",&dizi[i]);
    }
    printf("\n\n");

    for(j=0;j<=4;j++)
    {   
        if(aranan == dizi[j])
        {
            printf("aranana eleman dizide mevcut");
            
        }
        else
        {
            printf("aranan eleman dizide bulunmadı");
            break;
        }
        
        //toplam = toplam+dizi[j];
    }
    -------------fibonaci-------------------
    int i, x=0,y=1,fib,n;
    printf("N girin:");
    scanf("%d",&n);
    printf("%d\n%d\n",x,y);
    for(i=3;i<=n;i++)
    {
        fib = x+y;
        printf("%d\n",fib);
        x= y;
        y=fib;

    ----------------MUKKEMEL SAYİ*-------------------------

    int i,sayi,toplam=0;
    printf("Sayi:");
    scanf("%d",&sayi);
    for(i=1;i<sayi;i++)
    {
        if(sayi%i == 0)
        {
            printf("-%d",i);
            toplam = toplam+i;
            if(toplam == sayi)
            {
                printf("\n%d sayi mukmmekldir.",sayi);
            }
        }
    }
-------------------EN BUYUK SAYİYİ BUL----------------------------------
 if(a>b)
    {
        if(a>c)
        {
            enb =a;
        }
        else
        {
            enb = c;
        }
        
    }
    else
    {
        if(b>c)
        {
            enb = b;
        }
        else{
            enb = c;
        }
    }
    printf("En buyuk sayi : %d",enb);,
    --------------POZİFİLERİN ORTALAMASINI ALMA---------------------------
    int i,p,n,k=0;
    float sonuc;

    int dizi[6] = {-12,5,-78,96,56,-20};

    for(i=0;i<6;i++)
    {
        if(dizi[i]>0)
        {
            printf("%d\n",i);   
            p = p+dizi[i];
            k = k+1; // kaç tane olursa k değerine 1 eklenecek ve sayav kontrolu gormektedir.
        }
        else
        {   printf("%d\n",i);
            n = n+dizi[i];
        }
        
    }
    printf("\nP:%d\nN:%d",p/k,n);

    }
    -----------------DİZİDEKİ EN KÜÇÜK DEĞERİ BULMA------------------------
    int dizi[6] = {10,2,3,8,85,-5};
    int j,i,enk = dizi[0];

    for(i=1;i<6;i++)
    {
        if(enk>dizi[i])
        {
            enk = dizi[i];
            j =i;
        }
    }
    printf("en kucuk deger: %d\nyer:%d",enk,j)

    -------------ASALDAN SONRAKİ 10 ASAL BULMA-------------------------------------
    int i,sayi,n=0, sayi2;

    printf("sayi1 girin:");
    scanf("%d",&sayi);
    
    if(sayi%2 == 0 || sayi%3 == 0 || sayi%5 == 0 || sayi%7 ==0)
    {
    }
    else
    {
        while (n<10)
        {   sayi++;
            if(sayi%2 == 0 || sayi%3 == 0 || sayi%5 == 0 || sayi%7 ==0){      
            }
            else{
                printf("%d\n",sayi);
                n++;
                }
        }
    }
    -----------------4 milyona kadar çift fiboların  toplamları------------------------- 
    int x=0,y=1,fib,toplam=0;
    while (fib<=4000000)
    {    
        fib = x+y;
        if(fib%2 == 0)
        {
            toplam = toplam+fib;
        }
        x = y;
        y = fib;
    }
    printf("toplamlari: %d",toplam);
    
    printf("%zu",strlen(karakter)) seklinde yazılabilir.
    ----------------STRUCT İLE OTOMASYON-----------------------
   struct musteri  m1;
   printf("ad:");
   scanf("%s",&m1.ad);

   printf("yas:");
   scanf("%d",&m1.yas);
   
   printf("model:");
   scanf("%s",&m1.model);

   printf("fiyat:");
   scanf("%f",&m1.fiyat);

   printf("--------------bilgiler----------------------\n");
   printf("%s\n",m1.ad);
   printf("%d\n",m1.yas);
   printf("%s\n",m1.model);
   printf("%.2f\n",m1.fiyat);*/
    
   
    

    getch();
    return 0;
}