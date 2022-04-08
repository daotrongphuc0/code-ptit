#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A_2D[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&A_2D[i][j]);
        }
        
    }
    
    // Chuyển thành mảng 1D
    int A_1D[n* n];
    int A_1D_Index = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A_1D[A_1D_Index] = A_2D[i][j];
            A_1D_Index++;
        }
    }

    // Sắp xếp mảng 1D theo hướng tăng dần
    for (int i = 0; i < n * n; i++) {
        for (int j = i; j < n *n; j++) {
            if (A_1D[i] > A_1D[j]) {
                int tmp =A_1D[i];    A_1D[i]=A_1D[j];    A_1D[j]=tmp;
            }
        }
    }

    // Chuyển 1D lại thành 2D theo quy luật xoắn ốc
    int B_2D[n][n] ;
    int B_Index = 0;
    int B_Row_Index = 0;
    int B_Col_Index = 0;
    int Row = n;
    int Col = n;

    while (B_Row_Index < Row && B_Col_Index < Col) {

        // 1. Duyệt dòng đầu tiên của ma trận B
        for (int i = B_Col_Index; i < Col; i++)
        {
            B_2D[B_Row_Index][i] = A_1D[B_Index];
            B_Index++;
        }

        B_Row_Index++;

        // 2. Duyệt cột cuối cùng của ma trận B
        for (int i = B_Row_Index; i < Row; i++)
        {
            B_2D[i][Col - 1] = A_1D[B_Index];
            B_Index++;
        }

        Col--;

        // 3. Duyệt dòng cuối cùng của ma trận B
        if (B_Row_Index < Row)
        {
            for (int i = Col - 1; i >= B_Col_Index; i--)
            {
                B_2D[Row - 1][i] = A_1D[B_Index];
                B_Index++;
            }
            Row--;
        }

        // 4. Duyệt dòng còn lại của ma trận B
        if (B_Col_Index < Col)
        {
            for (int i = Row - 1; i >= B_Row_Index; i--)
            {
                B_2D[i][B_Col_Index] = A_1D[B_Index];
                B_Index++;
            }
            B_Col_Index++;
        }

    }

    // Print kết quả
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",B_2D[i][j]);
        }
        printf("\n");
    }

}