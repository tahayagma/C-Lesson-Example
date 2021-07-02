#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct ogr
{
char adi[50];
float odev1,odev2;
float quiz1,quiz2,quiz3;
float vize1,vize2;
float final;
float gecme_notu;
};


int main(){

    FILE *fdosya;
    if ((fdosya = fopen("notlar.txt","wb+")==NULL))
    {
        printf("Dosya acilamadi");
        exit(1);
    }
    struct ogr *ogrenci;
    int i;
    int boyut;
    printf("Ogrenci sayisini giriniz:");
    scanf("%d",&boyut);
    //Dinamik bellek yönetimi ile ogrenci sayısı kadar alan acilmasi
    ogrenci=(struct ogr*)malloc(sizeof(struct ogr)*boyut);

    for(i=0;i<boyut;i++)
    {
        //Ogrenci isim bilgisi ve not bilgilerinin alınması
        printf("Ogrencinin adini giriniz:");
        scanf("%s",&ogrenci[i].adi);
        printf("Ogrencinin odev notlarini giriniz:");
        scanf("%f",&ogrenci[i].odev1);
        scanf("%f",&ogrenci[i].odev2);
        printf("Ogrencinin quiz 1/2/3 notlarini giriniz:");
        scanf("%f",&ogrenci[i].quiz1);
        scanf("%f",&ogrenci[i].quiz2);
        scanf("%f",&ogrenci[i].quiz3);
        printf("Ogrencinin vize 1 ve 2 notlarini giriniz:");
        scanf("%f",&ogrenci[i].vize1);
        scanf("%f",&ogrenci[i].vize2);
        printf("Ogrencnini final notunu giriniz");
        scanf("%f",&ogrenci[i].final);
        //... final sınavı vs. de aynı şekilde devam edecek.
        //Tüm notlar struct içerisinde tanımlı ağırlık değerlerine göre yazılarak geçme notu hesaplatılması:
        ogrenci[i].gecme_notu=ogrenci[i].odev1*0.05+ogrenci[i].odev2*0.05+ogrenci[i].quiz1*0.08+ogrenci[i].quiz2*0.08+ogrenci[i].quiz3*0.08+
                            ogrenci[i].vize1*0.13+ogrenci[i].quiz2*0.13+ogrenci[i].final*0.40;
    }

    for(i=0;i<boyut;i++)
    {
        int j;
        //Ogrenci notlarının sıralanması
        for(j=0;j<boyut;j++)
        {
            if(ogrenci[i].gecme_notu<ogrenci[j].gecme_notu)
            {
                int temp=ogrenci[i].gecme_notu;
                ogrenci[i].gecme_notu=ogrenci[j].gecme_notu;
                ogrenci[j].gecme_notu=temp;
            }
        }
    }
    for(i=0;i<boyut;i++)
    {
        if(fwrite(&ogrenci[i],sizeof(ogrenci[i]),1,fdosya)!=1)
        {
            printf("Dosya yazma hatasi!");
            exit(1);
        }
    }
    fclose(fdosya);
    free(ogrenci);
    

    return 0;
}