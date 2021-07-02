#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    //  cevap A
    for (int i = 0; i < 10; i++)
    {
        if (i%3 == 0)
        {
            printf("A");
        }
        else if (i%2==0)
        {
            printf("B");
        }
        else
        {
            printf("C");
        }
    }
    
    // cevap B
    char string[] = "HARRAN";
    char *ptr = string;
    *ptr = *ptr+3;
    ptr = ptr+3;
    printf("%c",*ptr);
    ptr--;
    printf("%c",*ptr-17);
    ptr = string;
    printf("%c",*ptr-1);

    getch();
    return 0;
}