#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
void main()
{
    int result, n;
    printf("Enter The Number To Find Factorial");
    scanf("%d", &n);
    result = fact(n);
    printf("Factorial Of %d is %d", n, result);
}