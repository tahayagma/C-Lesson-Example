#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
double usAl(double, double);
float kareAl(float sayi){
    float sonuc = sayi*sayi;
   return sonuc;

}
int main(){

    float sayi;
    printf("bir sayi:");
    scanf("%f",&sayi);

    printf("%f",kareAl(sayi));

    getch();
    return 0;
}

//function USal
/* void main()

{

    double a, b;
    printf("taban ve us degeri gir:");
    scanf("%lf %lf", &a, &b);
    printf("%.2f", usAl(a, b));

    getch();
    return 0;
}

double usAl(double x, double y)
{

    int sayac;
    double sonuc = 1.0;

    for(sayac = 0;sayac<y;sayac++)
    {
        sonuc *= x;
    }
    return sonuc;

} */

//pointer

int main(void)
{

    /* float i;
    float *iptr;
    i = 15.8;
    iptr = &i;

    printf("%d\n",&i);
    printf("pointer: %d\n",iptr);
    printf("i degeri: %d\npointer degeri: %d\n",i,*iptr);
    printf("ppointer boyutu: %d",sizeof(iptr)); */

    /* int i[10],j;
    int *iptr;
    for (j=0;j<10;j++)
    {
        i[j] = j;
    }

    iptr = i;
    
    for(int k = 0;k<10;k++)
    {
        printf("%d",*iptr); // bu şekilde kalırsa dizinin ilk elemanını gösterir
        iptr++; // yaptıgımız takdirde artık deger düzelir
    }

    printf("\n%d \n",*(iptr-2));
    iptr = i;

    for(j = 0;j<10;j++)
    {
        printf("%d",*(iptr+j));
    }
    printf("\n%d ",*iptr); */

    /* int i ,j;
    char * ilkBaharAylar[3] = {"Mart, Nisan, Mayis"}; //pointer türünde dizileri tuttuk.
    char * yazAylar[3] = {"Haziran, Temmuz,Agustos"};
    char * sonBaharAylar[3] = {"Eylul,Ekim,Kasim"};
    char * kisAylar[3] = {"Aralik,Ocak,Subat"};

    char ** table[4];
    //pointerin pointer dizi değiskenidir 4 yazmamızın sebebi 4 mevsim olmasıdır burada örneğim table[0] ilk bahar table[1] ise yaz
    // aylarını dizi içine aktarmış oluruz. 

    table[0] = ilkBaharAylar; // table[0] indexinde artık ilkbaharın ayları var (mart nisan mayıs)
    table[1] = yazAylar;
    table[2] = sonBaharAylar;
    table[3] = kisAylar;


    for(i= 0;i<4;i++) // 1.for loop mevsim adları almak için ardından tekrar for loop ile mevsimin aylarına erişmiş oluruz table[0][0]=mart olur
    {
        for(j=0;j<3;j++) // j<3 olması mevsimlerin içinde 3 tane ay olmasındandır.
        {
            printf("%s\n",table[i][j]);
        }
    } */


//CALİSMA SORULARI

    int M;
    int X;
    int counter=0;
    printf("dizi uzunlugunu gir:");
    scanf("%d",&M);

    int dizi[M];

    for (int i=0;i<M;i++)
    {
        printf("dizinin [%d]. elemanini gir:",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("en az kac kere tekrar eden sayilari bulsun:");
    scanf("%d",&X);
    for (int i=0;i<M;i++)
    {
        for(int j = i;j<M;j++)
        {
            if (dizi[i]==dizi[j])
            {
                counter++;
            }
            
        }
        if (counter>=X)
        {
            printf("%d sayisi %d kez tekrar edilmis\n",dizi[i],counter);
        }
        counter=0;
    }

    getch();
    return 0;
}

