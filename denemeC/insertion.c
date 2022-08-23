#include <stdio.h>
#include <conio.h>
#define SIZE 14 // (1)

int main()
{ 
   int sorted_array[SIZE] = {3, 5, 8, 2, 1, 6, 4, 7, 12, 10, 9,11, 14, 13}; // (3) Sıralanacak dizi
   int counter, i, pivot, flag = 0;

    for (counter = 1 ; counter <SIZE; counter++) {
        pivot = sorted_array[counter];

        for (i = counter - 1 ; i >= 0; i--)
        {
            if (pivot < sorted_array[i])
            {
                sorted_array[i+1] = sorted_array[i];
                //flag = 1;
            }
            else
                break;
        }
        if (flag)
        sorted_array[i+1] = pivot;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ",sorted_array[i]); 
    }
    


    getch();
    return 0;
}