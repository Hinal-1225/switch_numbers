/*C program of numbers 0 and 1 using switch statement */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("\nEnter number :");
    scanf("%d",&n);
    switch(n)
    {
    case 0:
        printf("\nnumber is 0");
        break;
    case 1:
        printf("\nnumber is 1 ");
        break;
    default:
        printf("\nthe entered number isn`t in the list\n");
        break;
    }
    system("pause");
	return 10;
}
