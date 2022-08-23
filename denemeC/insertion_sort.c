#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 14 // (1)
//prototype
void insertion_sort(int sorted_array[],int size); //(2)

int main()
{
    int array_to_be_sorted[SIZE] = {3, 5, 8, 2, 1, 6, 4, 7,12, 10, 9,11, 14, 13}; // (3) Sıralanacak dizi
    insertion_sort(array_to_be_sorted, SIZE); // Sıralanacak dizi fonksiyona gönderilir

    for (int i = 0; i <SIZE; i++)
    {
        printf("%d ",array_to_be_sorted[i]);
    }
    
    
    getch();
    return 0;
}

void insertion_sort(int sorted_array[],int size) // (4)
{
    int counter = 1;
    int i, temp;
    int pivot = sorted_array[1];
    
    while(counter < size+1) // (5) 
    {
        for(i = counter - 1; i >= 0; i--)
        {
            if(pivot < sorted_array[i])
            {
                temp = sorted_array[i];
                sorted_array[i+1] = temp; // (6)
                sorted_array[i] = pivot;    //(7)
            }
            else
                break; // (8)
        }
        counter++;
        pivot = sorted_array[counter];// (9) ;
    }
}