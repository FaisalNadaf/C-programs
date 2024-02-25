#include <stdio.h>
int n, stack[100], i, ch, value, top = -1;

void push();
void pop();
void display();

void main()
{
    printf("enter the size of array");
    scanf("%d", &n);
    while (ch != 4)
    {
        printf("enter the choice ");
        printf("1.Push \n  2.Pop \n 3.Display \n 4.EXIT");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;3

            
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("INVALID CHOICE");
            break;
        }
    };
}

void push()
{
    if (top == n - 1)
    {
        printf("stack is full");
    }
    else
    {
        printf("Enter a value \n");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d element deleted from stack", stack[top]);

        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
    }
}