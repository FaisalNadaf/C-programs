#include <stdio.h>
int binary(int a[100],int key,int n){
int mid, low=0 ,high=n-1;
mid=(low+high)/2;

while (low<=high)
{
    if (key==a[mid])
{
   return mid;
}
if (key>a[mid])
{
   return mid=high-1;
}
if (key<a[mid])
{
   return mid=low+1;
}
return -1;
}



}
void main()
{
    int a[100], n, key, pos, i;
    printf("enter the size of arry");
    scanf("%d", &n);
    printf("enter the elements in arry");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elements to search in the array ");
    scanf("%d", &key);
    pos = binary(a, key,n);
    if(pos==-1){
    printf("elements not found");
    }else{
    printf("elements  found at %d",pos);5
    
    }
}