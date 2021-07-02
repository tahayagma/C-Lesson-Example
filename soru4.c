#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main() { 
	char metin[100], ktr; 
	int i, c, toplamRakam =0, toplamKelime=0, toplamHarf = 0, toplamOzelKarakter = 0, toplamSatir = 0;
	printf("Metin giriniz: \n");
	gets(metin);
	printf("%s",metin);
	for(i = 0; i < 100; i++)
	{
		if(metin[i] == '1' || metin[i] == '2' || metin[i] == '3' || metin[i] == '4' || metin[i] == '5' || metin[i] == '6' ||
		metin[i] == '7' || metin[i] == '8' || metin[i] == '9' || metin[i] == '0')
		{
			toplamRakam++;
		}
		if(metin[i] == ' ')
		{
			toplamKelime++;
		}
		if(metin[i] == ',' || metin[i] == '.' || metin[i] == ';' || metin[i] == ':' || metin[i] == '!' || metin[i] == '<' ||
		metin[i] == '>' || metin[i] == '(' || metin[i] == ')' || metin[i] == '[' || metin[i] == '{' ||
		metin[i] == '}' || metin[i] == '+' || metin[i] == '-' || metin[i] == '*' || metin[i] == '/' || metin[i] == '=' || metin[i] == '?' )
		{
			toplamOzelKarakter++;
		}
		if(metin[i] == 'a' || metin[i] == 'b' || metin[i] == 'c' || metin[i] == 'd' || metin[i] == 'e' || metin[i] == 'f' ||
		metin[i] == 'g' || metin[i] == 'h' || metin[i] == 'i' || metin[i] == 'j' || metin[i] == 'k' ||
		metin[i] == 'l' || metin[i] == 'm' || metin[i] == 'n' || metin[i] == 'o' || metin[i] == 'p' || metin[i] == 'r' || metin[i] == 's'
		|| metin[i] == 't' || metin[i] == 'w' || metin[i] == 'x' || metin[i] == 'y' || metin[i] == 'z' || metin[i] == 'q' || metin[i] == 'v')
		{
			toplamHarf++;
		}
	}
	printf("\nToplam kelime sayisi = %d\nToplam harf sayisi = %d\nToplam ozel karakter sayisi = %d\nToplam rakam sayisi = %d\nToplam satir sayisi = %d"
	,toplamKelime+1,toplamHarf,toplamOzelKarakter,toplamRakam,toplamSatir+1);

	getch();
	return 0;
}
