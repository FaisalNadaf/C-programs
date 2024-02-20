#include <stdio.h>
//------------------------------------------------print array
void printArray(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
            printf(" \n");

}
//-----------------------------------------------swap numbers
void swap(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//------------------------------------------------sort algo
void bubbleSort(int a[],int n){
int i,j,min_index;

for ( i = 0; i < n-1; i++)
{
    for ( j =0; j <n-i-1; j++)
    {
        if (a[j]>a[j+1])
        {
    swap(&a[j],&a[j+1]);
    
        }
        
    }

}
}



//----------------------------------------------main function

void main()
{
    int a[100], n, i;
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter %d elements in array", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("orignal array \n");
    printArray(a, n);
    bubbleSort(a,n);
     printf("sorted  array\n");
    printArray(a, n);
}