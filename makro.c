#include <stdio.h>
#include <conio.h>

#define Maksimum(s1,s2) (s1<s2) ? s1: s2
// yukarıda tanımlanan önişelmci de basit bit fonksiyondur
// ? ile sorgular eğer sağlarsa s1 yazdırır değilse de s2 döndürür

     int makro(int sayi1,int sayi2)
     {
         if(sayi1<sayi2){
             printf("%d",sayi1);
         }
         if(sayi1>sayi2){
             printf("%d",sayi2);
         }
     }


int main(){

    printf("%d\n",Maksimum(8,47));

    makro(35,26);


    getch();
    return 0;

}