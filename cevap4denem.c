#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
    char metin[100], ktr;
    int i,karekter =0, kelime=0,harf = 0,rakam=0,satir = 0;

    printf("metin:");
    gets(metin);

    for (i = 0; i <strlen(metin); i++)
    {
        if ((metin[i]>='a' && metin[i]<='z') || (metin[i]>='A' && metin[i]<='Z'))
        {
            harf++;
        }
        else if (metin[i]>='0' && metin[i]<='9')
        {
            rakam++;
        }
        else if (metin[i] == ' ')
        {
            kelime++;
        }
        else if (metin[i]=="\n")
        {
            satir++;
        }
        else
        karekter++; 
    }

    
    printf("toplam harf sayisi: %d\n",harf);
    printf("toplam rakam sayisi: %d\n",rakam);
    printf("toplam kelime sayisi: %d\n",kelime+1);
    printf("toplam ozel karakter sayisi: %d\n",karekter);
    printf("toplam satir sayisi: %d",satir+1);
    
    



    getch();
    return 0;
}