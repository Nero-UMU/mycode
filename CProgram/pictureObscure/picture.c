#include <stdio.h>
#include <stdlib.h>

int PrintMatrix(int* matrix, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", *(matrix + i * m + j));
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    int n, m, tmp, num;
    scanf("%d%d", &n, &m);
    int* matrix = (int*)malloc(sizeof(int) * n * m);
    int* newMatrix = (int*)malloc(sizeof(int) * n * m);
    for(int i = 0; i < n * m; i++)
    {
        scanf("%d", &tmp);
        *(matrix + i) = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tmp = *(matrix + i * m + j); // self
            num = 1;
            if(j - 1 >= 0) //left
            {
                tmp += *(matrix + i * m + j - 1);
                num++;
            }
            if(j + 1 < m) // right
            {
                tmp += *(matrix + i * m + j + 1);
                num++;
            }
            if(i - 1 >= 0) // up
            {
                tmp += *(matrix + i * m + j - m);
                num++;
            }
            if(i + 1 < n) // down
            {
                tmp += *(matrix + i * m + j + m);
                num++;
            }
            if(j - 1 >= 0 && i - 1 >= 0) // left up
            {
                tmp += *(matrix + i * m + j - 1 - m);
                num++;
            }
            if(j - 1 >= 0 && i + 1 < n) // left down
            {
                tmp += *(matrix + i * m + j - 1 + m);
                num++;
            }
            if(j + 1 < m && i - 1 >= 0) // right up
            {
                tmp += *(matrix + i * m + j + 1 - m);
                num++;
            }
            if(j + 1 < m && i + 1 < n) // right down
            {
                tmp += *(matrix + i * m + j + 1 + m);
                num++;
            }
            *(newMatrix + i * m + j) = tmp / num;
        }
    }
    PrintMatrix(newMatrix, n, m);
    free(matrix);
    free(newMatrix);
    return 0;
}