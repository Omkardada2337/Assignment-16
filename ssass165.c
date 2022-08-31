// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[3][3], sum = 0;
    system("cls");

    printf("Enter the elements of matrix 1 : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter the r %d row and column %d element of matrix 1 : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n**************** Original matrix is : ***************\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
            if (i+j==2)
            {
                sum = sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n\nSum of right diagonal of a matrix is : %d", sum);

    getch();
    return 0;
}