#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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

    int dizi_boyutu;

    FILE *dosya; 
    dosya = fopen("notlar.txt","w");
    
    printf("dizi boyutunu gir:");
    scanf("%d",&dizi_boyutu);
    

    struct ogr *ogrn;

    ogrn = (struct ogr *)malloc(dizi_boyutu*sizeof(struct ogr));


    for (int i = 0; i <dizi_boyutu; i++)
    {
        printf("%d.ogrencinin adi:",i+1);
        scanf("%s",&ogrn[i].adi);
        printf("%s odev 1/2 notu gir:",ogrn[i].adi);
        scanf("%f %f",&ogrn[i].odev1,&ogrn[i].odev2);
        printf("%s quiz 1/2/3 notu gir:",ogrn[i].adi);
        scanf("%f %f %f",&ogrn[i].quiz1,&ogrn[i].quiz2,&ogrn[i].quiz3);
        printf("%s'in vize 1 ve 2 notu gir: ",ogrn[i].adi);
        scanf("%f %f",&ogrn[i].vize1,&ogrn[i].vize2);
        printf("%s final notu gir:",ogrn[i].adi);
        scanf("%f",&ogrn[i].final);
        printf("----------------------------------\n");

        ogrn[i].gecme_notu =(ogrn[i].odev1*0.05+ogrn[i].odev2*0.05+ogrn[i].quiz1*0.08+ogrn[i].quiz2*0.08+ogrn[i].quiz3*0.08+
                            ogrn[i].vize1*0.13+ogrn[i].vize2*0.13+ogrn[i].final*0.40)/8;

        fprintf(dosya,"Ogrenci adi:%s gecme notu: %.2f\n",ogrn[i].adi,ogrn[i].gecme_notu);
        printf("Ogrenci adi:%s\n gecme notu: %.2f\n",ogrn[i].adi,ogrn[i].gecme_notu);

    }
    
    
    fclose(dosya);
    free(ogrn);
    printf("veriler 'notlar.txt' adli dosyaya kaydedildi. ");

    /* for (int c = 0; c <dizi_boyutu; c++)
    {
        int new_array[8] = {ogrn[c].odev1,ogrn[c].odev2,ogrn[c].quiz1,ogrn[c].quiz2,ogrn[c].quiz3,ogrn[c].vize1,
                        ogrn[c].vize2,ogrn[c].final};
        insertion_sort(new_array,sizeof(new_array)/4);

        for (int a = 0; a <sizeof(new_array)/4; a++)
        {
            printf("%d ",new_array[a]);
        }
        printf("\n");
    } */
    
    for(int i=0;i<dizi_boyutu;i++)
    {
        int j;
        //Ogrenci notlarının sıralanması
        for(j=0;j<dizi_boyutu;j++)
        {
            if(ogrn[i].gecme_notu<ogrn[j].gecme_notu)
            {
                int temp=ogrn[i].gecme_notu;
                ogrn[i].gecme_notu=ogrn[j].gecme_notu;
                ogrn[j].gecme_notu=temp;
            }
        }
    }
    
    for (int i = 0; i < dizi_boyutu; i++)
    {
        
    }
    

    
    

    getch();
    return 0;
}

