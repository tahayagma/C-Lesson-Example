#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct restoran
{
   int sicil_no;
   char ad_soyad[50];
   float musteri_not;
   float patron_not;
};


int main(){
    int secim;
    int calisan_sayisi;
    struct restoran *calisan;
    float temp,en_basarili,ortalama;
    int liste_secenek;
    float alt_limit,ust_limit;
    int calisan_no;
    
   
   while (1)
   {
        printf("1: yeni kayit ekle\n");
        printf("2: kayit listele\n");
        printf("3: kayit guncelle\n");
        printf("4: calisan ortalama hesapla\n");
        printf("5: en basarili calisan\n");
        printf("0: cikis\n");

        printf("\nLutfen seciminizi giriniz: ");
        scanf("%d",&secim);
        

        switch (secim)
        {
            case 1:
                printf("Kaydedilecek calisan sayisi gir:");
                scanf("%d",&calisan_sayisi);

                calisan = (struct restoran *)malloc(calisan_sayisi*sizeof(struct restoran));

                for (int i = 0; i <calisan_sayisi; i++)
                {
                    printf("%d.calisan adi soyadi:",i+1);
                    scanf("%s",&calisan[i].ad_soyad);
                    printf("%s sicil numarasi gir:",calisan[i].ad_soyad);
                    scanf("%d",&calisan[i].sicil_no);
                    printf("%s musteri degerlendirme notu gir:",calisan[i].ad_soyad);
                    scanf("%f",&calisan[i].musteri_not);
                    printf("%s patron degerlendirme notu gir:",calisan[i].ad_soyad);
                    scanf("%f",&calisan[i].patron_not);
                }
                break;
            case 2:
                
                printf("------------------Calisanlari Listele-------------\n");
                printf("1:  Patron not ile listemele\n");
                printf("2:  musteri not ile listeleme\n");
                printf("calisanlari listeleme turunu secin:");
                scanf("%d",&liste_secenek);
                switch (liste_secenek)
                {
                case 1:
                    printf("\npatron not ile listeleme icin alt limit:");
                    scanf("%f",&alt_limit);
                    printf("\npatron not ile listemele icin ust limit:");
                    scanf("%f",&ust_limit);
                    for (int i = 0; i < calisan_sayisi; i++)
                    {
                        if (calisan[i].patron_not>=alt_limit && calisan[i].patron_not <=ust_limit)
                        {
                            printf("____________________________________________\n");
                            printf("calisan adi :%s\n",calisan[i].ad_soyad);
                            printf("calisan sicil no : %d\n",calisan[i].sicil_no);
                            printf("calisan patron not: %.2f\n",calisan[i].patron_not);
                            printf("calisan musteri not: %.2f\n",calisan[i].musteri_not);
                            printf("____________________________________________\n");

                        }
                        
                    }
                    
                    break;
                case 2:
                    printf("\nmusteri not ile listeleme icin alt limit:");
                    scanf("%f",&alt_limit);
                    printf("\nmusteri not ile listemele icin ust limit:");
                    scanf("%f",&ust_limit);
                    for (int i = 0; i < calisan_sayisi; i++)
                    {
                        if (calisan[i].musteri_not>=alt_limit && calisan[i].musteri_not <=ust_limit)
                        {
                            printf("____________________________________________\n");
                            printf("calisan adi :%s\n",calisan[i].ad_soyad);
                            printf("calisan sicil no : %d\n",calisan[i].sicil_no);
                            printf("calisan patron not: %.2f\n",calisan[i].patron_not);
                            printf("calisan musteri not: %.2f\n",calisan[i].musteri_not);
                            printf("_________________________________________________\n");

                        }
                        
                    }
                    break;
                
                default:
                    break;
                }
                break;

            case 3:
                printf("\n--------------Kayit Guncelle--------------------\n");
                printf("Güncellemek istediginiz calisan no girin:");
                scanf("%d",&calisan_no);
                for (int i = 0; i < calisan_sayisi; i++)
                {
                    if (calisan[i].sicil_no == calisan_no)
                    {
                        printf("bulunan kayit: %d\n",calisan[i].sicil_no);
                        printf("guncellemek istediginiz degerleri girin:\n");
                        printf("%d.calisan adi soyadi:",i+1);
                        scanf("%s",&calisan[i].ad_soyad);
                        printf("%s sicil numarasi gir:",calisan[i].ad_soyad);
                        scanf("%d",&calisan[i].sicil_no);
                        printf("%s musteri degerlendirme notu gir:",calisan[i].ad_soyad);
                        scanf("%f",&calisan[i].musteri_not);
                        printf("%s patron degerlendirme notu gir:",calisan[i].ad_soyad);
                        scanf("%f",&calisan[i].patron_not);
                        printf("Kayit guncellendi.\n");
                        printf("----------------------------------------------\n");
                        break;

                    }
                    else
                    {
                        printf("kayit bulunamadi");
                        break;
                    }
                    
                }
                
                break;
        
            case 4:
                printf("\n-------Calisan ortalamalari-------\n");
                for (int i = 0; i < calisan_sayisi; i++)
                {
                    printf(" calisan adi: %s calisan ortalama: %.2f\n",calisan[i].ad_soyad,(calisan[i].musteri_not*0.5+calisan[i].patron_not*0.5));
                }
                printf("---------------------------------\n\n");
                break;
            case 5:
                ortalama = calisan[0].patron_not*0.5+calisan[0].musteri_not*0.5;
                for (int i = 1; i < calisan_sayisi; i++)
                {
                    temp = calisan[i].musteri_not*0.5+calisan[i].patron_not*0.5;
                    
                    if (temp>ortalama)
                    {   
                        en_basarili = temp;
                    }
                    else
                    {
                        en_basarili = ortalama;
                    }
                    
                }
                printf("\n-----------------------------------------\n");
                printf("en basarili calisan basari notu: %.2f\n",en_basarili);
                printf("------------------------------------------\n\n");
                break;
            case 0:
                free(calisan);
                break;


            default:
                printf("lutfen bir secim yapin");
                break;
        }
   }
    
    getch();
    return 0;
}