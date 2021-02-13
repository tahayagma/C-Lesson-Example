# include <stdio.h>
# include <conio.h>
#include <stdbool.h>

/* void yazdir(char args[0])
{
    printf("%s\n",args);
};
int topla(int x, int y, bool f){

    if (f == true){

        printf("%f\t",(float)x + (float)y);
        printf("Bool degeri true\n");
    }
    else
    {   
        printf("%d\t",x+y);
        printf("Bool degeri false");
    }
} 

yazdir("ali bu yazi deneme olarak yazilmistir.hudud yok bunuh"); BU SEKİLDE DE CAĞIRABİLİRİZ.
    topla(3,5, false);*/
/*-------------------SAYİYİ TERSİNE CEVİR------------------------------------
int i ,sayi,ort=0; //degiskemlerimiz tanımladık

    printf("Enter a Number:");
    scanf("%d",&sayi);
    

    while (sayi>=1) //sayi 1 e eşit ve büyük olana kadar döngü devam edecek
    {
        i = sayi%10; // önce sayinin birler basamğındaki rakamı alıyoruz
        printf("%d\n",i);
        ort = ort*10+i; // ardından 10  ort çarpıp i ekledik
        printf("%d\n",ort);
        sayi = sayi/10; // sayiyi tekrar 10' na böldük.
         printf("%d\n",sayi); 

    }

    //printf("%d",ort);
*/
/*--------------------------------- ARMS AND PREFECT NUMBER CHECK----------------------------
int armstrong(int sayi)
{
    int n,sump=0;
    int N = sayi; // eger farklı bir degiskene atılmazsa while ile gercek sayi degeri 0 olur.
    while(N!=0)
    {
        n = N%10; //birler basamğını veriyor.
        sump += n*n*n;
        N = N/10;
    }
    if(sump == sayi){
        printf("sayi armstrong bir sayidir.\n");    
    }
    else{   
        printf("sayi amstrong degildir.\n");
    }
    
}

int prefect(int sayi)
{
    int i,sum= 0;
    for(i=1;i<sayi;i++){
        if(sayi%i == 0){
            sum += i;
        }
    }
    if(sum == sayi){
        printf("sayi mukemmeldir.\n");
    }
    else{
        printf("sayi mukemmel degildir.\n");
    }

}
 ------main func-----------
int sayi;
    while (1)
    {
        printf("sayi gir:");
        scanf("%d",&sayi);
        armstrong(sayi);
        prefect(sayi);
    }*/
/*---------------------TEKRAR EDENLERİ SİL----------------------
     int i,j,k,size;
    int dizi[20] = {1,2,3,4,6,9,4};

    for(i=0;i<6;i++)
    {
        for(j = i+1;j<6;)
        {
            if(dizi[i] == dizi[j])
            {
                for(k = j;k<6;k++)
                {
                    dizi[k] = dizi[k+1];
                }
                k--;
            }
            else
            {
                j++;
            }
            
        }
    }
    

    for(i=0;i<6;i++)
    {
        printf("%d\n",dizi[i]);
    } */
/*--------------------KOMPLEX FAKTÖRİYEL-----------------------
int fact(int sayi)
{
    int i,sum=1;
    int n=0;
    for(i=sayi;i>1;i--)
    {
        sum *= i;
    }
    printf("%d sayinin faktoryeli: %d\n",sayi,sum);

}

int ekadar(int sayi){
    int i, top=0;
    for(i=sayi;i>=1;i--){
        top += (fact(i)/i);
        printf("\ntop: %d",fact(i)/i);
    }
    printf("\n----------------------\ntoplam: %d",top);
}*/
/*--------------------SWAPPİNG 2 NUMBER--------------------------
void reverS(int*,int*);
int main(){
    
    int n1,n2;
    printf("Enter number:");
    scanf("%d %d",&n1,&n2);
    printf("before swapping: %d %d\n",n1,n2);
    reverS(&n1,&n2);
    printf("after swapping: %d %d",n1,n2);

    getch();
    return 0;
}
void reverS(int*p,int*q){
    int temp;

    temp = *p;
    *p = *q;
    *q= temp;
}*/

int NumCount(int);


int main(){

    char a,b;
    printf("sayi1:");
    scanf("%s %s",&b,&a);



    printf("d:%c\ne:%c",(char)b,(char)a);
     
    
    

    getch();
    return 0;
}
 
/* int NumCount(int n){
    if(n<=50)
    {
        printf("%d ",n);
        NumCount(n+1);
    }
}
 */