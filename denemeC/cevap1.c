#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){


//  cevap A
int i;
for (i = 0; i < 10; i++)
{
    if (i%2==0)
    {
        printf("A");
    }
    else if (i%3==0)
    {
        printf("B");
    }
    else
    {
        printf("C");
    }
}

// cevap B
    char string[] = "BADGERS";
    char *ptr = string;
    *ptr = *ptr+2;
    ptr = ptr+2;
    printf("%c",*ptr);
    ptr--;
    printf("%c",*ptr);
    ptr = string;
    printf("%c",*ptr);
    getch();
    return 0;
}