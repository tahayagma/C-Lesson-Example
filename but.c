#include <stdio.h>
#include <conio.h>

 /* int main() {

    int sayi;

    printf("sayi girin: ");
    scanf("%d",&sayi);

    guclusayibul(sayi);
    
    getch();
    return 0;
}

int guclusayibul( int sayi){
    int i,j,a,faktoriyel=1;
    int faktToplam = 0;
    for (i= sayi;i>=1;)
    {
        a = i%10;
        i = i/10;
        for(j=a;j>=1;j--){
            faktoriyel *=j;
        }
        faktToplam = faktToplam+faktoriyel;
        faktoriyel = 1;
    }
    if (sayi == faktToplam)
    {
        printf("%d guclu sayidir\n",sayi);
    }
    else{printf("%d guclu sayi degildir.\n",sayi);}
} */

/*#include <stdio.h>
#include <conio.h>
int main(){

    int dizi[] = {39,40,44,41,42};
    int diziboyu= sizeof(dizi)/sizeof(dizi[0]);
    
    sayiyibul(dizi,diziboyu);


    getch();
    return 0;
}

int sayiyibul(int dizi[],int diziboyu){
    int i,j,k;

    for(i=0;i<diziboyu;i++){
        
        for(j=i+1;j<diziboyu;j++)
        {
            if(dizi[i]>dizi[j]){
                k = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = k;
            }
        }
    }

    for(i=0;i<diziboyu-1;i++){
        if(dizi[i]-dizi[i+1] != -1){
            printf("Eksik Sayi: %d",(dizi[i]+1));
        }
    }
}*/

void a(void);
void b(void);
void c(void);
int x=8;
int main()
   {
int x=6;
printf("x=%d\n",x);
{
    int x=4;
    printf("x=%d\n",x);
}
      printf("x=%d\n",x);
     a();
     b();
     c();
     a();
     b();
     c();
     printf("x=%d\n",x);

     getch();
     return 0;
   }
void a()
  {
int x=36;
printf("x=%d\n",x);
x++;
printf("x=%d\n",x);
   }
void b()
  {
static int x=72;
printf("x=%d\n",x);
x++;
printf("x=%d\n",x);
   }
void c()
  {
printf("x=%d\n",x);
x*=10;
printf("x=%d\n",x);
  }
