

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, *pointer, i;
    printf("Enter the size of memory should be allocated\n");
    scanf("%d", &size);
    pointer = (int *)malloc(size * sizeof(int));
    if (pointer == NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("Memory allocated using malloc\n");
        for (i = 0; i < size; i++)
        {
            pointer[i] = i + 1;
            printf("DATA is %d \t ADDRESS is %p \n", pointer[i], (void *)&pointer[i]);
        }
        free(pointer);
    }
    return 0;
}
