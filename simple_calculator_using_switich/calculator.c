#include <stdio.h>
void main()
{
    int choice, a, b;
    printf("Enter the two number");
    scanf("%d %d", &a, &b);
    printf("Enter the choice\n");
    printf("\n 1.ADDITION \n 2.SUBCTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n5.MODULAS\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("ADDITION of %d and %d is %d ", a, b, (a + b));
        break;
    case 2:
        printf("SUBCTRACTION of %d and %d is %d ", a, b, (a - b));
        break;
    case 3:
        printf("MULTIPLICATION of %d and %d is %d ", a, b, (a * b));
        break;
    case 4:
        printf("DIVISION of %d and %d is %d ", a, b, (a / b));
        break;
    case 5:
        printf("MODULAS of %d and %d is %d ", a, b, (a % b));
        break;

    default:
        printf("INVALID CHOICE!!!");
        break;
    }
}
