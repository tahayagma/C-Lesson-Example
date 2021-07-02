#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a,b;
    float m,n; //ifadede virgül işareti eksik
    scanf("%d %d",&a,&b); //ampersant ile değer ataması yapılmalıdır.
    n = a+b; // böyle bir atama mümkün değildir. n= a+b şeklinde olabilir.
    printf("%f\n",m);
    if( a<b && b<5 )
    {// a<b && b<5 seklinde olmalı
        printf("a and b less than 5\n");
    }
    else
        printf("either a or b greater than 5\n");
    while( m != 0 ) // <> yerine != (eşit değil) ifadesi gelmelidir
    {
        // bu iki ifade döngü gövdesi olduğu için parantez içinde olmalı.Fakat bir söz dizimi hatasi değildir
        printf("%f", m );
        m=m+1;
    } 

    getch();   
    return 0;
}