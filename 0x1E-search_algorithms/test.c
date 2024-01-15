#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t i;
    int l = 0;
    int h = size - 1;
    int mid;

    if (!array)
        return (-1);

    for (i = 0; l <= h; i++)
    {
        mid = (l + h) / 2; 

        int j;
        printf("Searching in array: ");
        for(j = l; j <= h; j++) {
            printf("%d, ", array[j]);
        }
        printf("\n");

        if (array[mid] == value)
            return (array[mid]);
        else if(array[mid] > value)
            h = mid - 1;
        else
            l = mid + 1;
    }
    
    return (-1);
}
