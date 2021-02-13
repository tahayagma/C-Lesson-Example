#include <stdio.h>
#include <conio.h>


/*

NOT1 = &&(VE)AND

 NOT2 = ||(VEYA) OR

for(i=1,i<=10;i++)
i = 1 dedik ardından i<= 10 olana kadar dönü devam etsin
ve i 1 artır her seferinde
ardından{} içine belirtilen şartlar devam ettiği sürece
çalışmasını istediğimiz kodları yazıyoruz. 

BASİT FAKTÖRİYEL
int i,sayac=1;
    for(i=5; i>0;i--){
        sayac = sayac*i;
    }

BASAMAKLARINA AYIRMA
int a,b,c,sayi=459;
    a = (sayi/100);
    b = (sayi/10)%10;
    c = sayi%10;

    WHİLE İLE FAKTÖRİYEL
    int i,fakt=1;
    printf("login:");
    scanf("%d",&i);
    while(i>0){
        fakt *= i;
        i -=1;
        }

----------YILDIZLAR DÖNGÜ ALG--------------
printf("Taban:");
    scanf("%d",&tbn);


    for(i=1;i<=tbn;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


--------CREATE MATRİS---------------------
 int satir,sutun,i,j,n,m;

    printf("Satir:");
    scanf("%d",&satir);

    printf("Sutun:");
    scanf("%d",&sutun);

    printf("Olusan Matris:[%d][%d]\n",satir,sutun);
    int matris [satir][sutun];
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("[%d][%d]-->:",i,j);
            scanf("%d",&matris[i][j]);
        }
        printf("\n");
    }
    for(n=0;n<satir;n++)
    {
        for(m=0;m<sutun;m++)
        {
            printf("%d\t",matris[n][m]);
        }
        printf("\n");
    }

*/ 
int main() {

    int i,j,k;
    for(i=1;i<=9;i++)
    {
        for(j=0;j<9;i++)
        {
            for(k=0;k<=9;k++)
            printf("Sayi:%d%d%d",i,j,k);
            printf("\n");
        }
    }
    getch();
    return 0;
}