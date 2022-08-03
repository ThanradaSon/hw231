#include <stdio.h>

int main(){
    int i, j;
    int row = 1 , col = 6;
    int nTable;
    int n;
    int x, y;
    int arrOutx[50];
    int arrOuty[50];
    char arrTable[10][col];
    int lastRow;

    scanf("%d", &nTable);
    if (nTable == 0)
    {
        printf("Error");
    }else if (nTable < 0 || nTable > 40)
    {
        printf("Error!");
    }else
    {
        
        scanf("%d", &n);

        row = nTable/6;
        if (nTable % 6 != 0)
        {
            row++;
            lastRow = nTable % 6;
        }

        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < col; j++)
            {
                if (i == row-1 && j == lastRow)
                {
                    break;
                }else
                {
                    arrTable[i][j] = 'X';
                }

            }
        }

        int count = 0;
        while (count < n)
        {
            scanf("%d %d", &x, &y);
            if (x < 1 || x > row || y < 1 || y > col || ((x == row)&&(y > lastRow)) )
            {   
                count--;
                printf("%d %d Out of range!\n", x, y);
            }else
            {
                arrTable[x-1][y-1]  = 'S';
            }
            count++;
        }
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < col; j++)
            {
                if (i == row-1 && j >= lastRow)
                {
                    continue;
                }else
                {
                    printf("%c ", arrTable[i][j]);
                }
            }
            printf("\n");
        }
    }
}