#include <stdio.h>
int linear(int a[100],int key,int n){
int i;
for ( i = 0; i < n; i++)
{
    if (key==a[i])
{
   return i;
}
}

return -1;
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
    pos = linear(a, key,n);
    if(pos==-1){
    printf("elements not found");
    }else{
    printf("elements  found at %d",pos);
    
    }
}