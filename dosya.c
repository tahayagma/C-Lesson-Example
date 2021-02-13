#include <stdio.h>
#include <conio.h>

int main(){
    /*FILE *ds = fopen("C:\\Users\\tahay\\Desktop\\yeni.txt","w");//*ds pythondaki as f ile benzerdir.

    putc('you are welcome my site',ds);//yazdıralacak olan veriler tek tırnak içinde yazılmalıdır.

    fclose(ds);//bu şekilde de dosyayı kapatmış olduk.
    
    ----------------------------------------------------
    FILE *belge = fopen("C:\\Users\\tahay\\Desktop\\yeni.txt","r"); // okuma modunda açmak için r  ile açtık.
    char karakter; // ardından bir değişken olşturup verileri bu değişkene atadık.

    do
    {
        karakter= getc(belge); // burada belgeden getc ile veriler aldık. Ve karater değişkenimize atadık.

        printf("%c",karakter); // aldığımız karakter değişkenini yazdırdık.
    }
    while (karakter != EOF);
    fclose(belge);

    ----------------------------------------------------
    char veri[50]; // 50 karakter uzunluğunda bir değişken oluşturduk.
    FILE *belge = fopen("C:\\Users\\tahay\\Desktop\\yeni.txt","r");

    fgets(veri,25,belge); // fgets istenilen karakter kadar veri almamızı sağla
    //fgets satır sonuna ve dosya sonuna geldiği zaman durur.

    puts(veri); // aldığımız veriyi yazdırdık.
    fclose(belge);// dosyamızı kapattık.
    -----------------------------------------------------------
    */
   char veri[100];
   printf("Veri gir:");
   scanf("%s",&veri);

   FILE *metin = fopen("C:\\Users\\tahay\\Desktop\\yeni.txt","w");

   fputs(veri,metin);// toplu yazdırma ile verinin dadee ilk harfi değil tamamını yazdırır








    getch();
    return 0;
}