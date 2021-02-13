#include <stdio.h>
#include <conio.h>

/*
char bilgi[40];

    printf("Gir:");
    gets(bilgi); // ile bilginin boşluktan sonraki kısımlarıda dahil tamamını aldık.
    printf("\n\n");
    puts(bilgi); // aldığımız string değerini yazdırdık.

strlen("merhaba") ile  python daki len fonksiyonudur.

strcpy ile de değişkene farklı bir değişkene kopyalar.
strncpy ile ise değişkenden n kadar karakter kopyalar.

strcat(yazar,kitap) ile de birleştirme yapar

enum dizilere benzer yapıda verileri saklar.
*/

int main(){
    char pluss;
    char kitap[15] ="Mufettis";
    char yazar[20] ="Gogol";
    
    printf("%s",strcat(kitap,yazar));



    getch();
    return 0;

}