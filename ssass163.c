// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[3][3];
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
        }
        printf("\n");
    }
    printf("\n\n**************** Transpose of a matrix is : ***************\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[j][i]);
        }
        printf("\n");
    }

    getch();
    return 0;
}