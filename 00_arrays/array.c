#include "stdio.h"



int main()
{
    // 1 dimensional array
    int one_dim_arr[9] = {0,1,2,3,4,5,6,7,8};

    // print
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", one_dim_arr[i]);
    }

    // multidimensional array [ROW] [COLUMN]
    int multi_dim_arr[3][4] = {
        {0,1,2,3}, 
        {4,5,6,7}, 
        {8,9,10,11}
    };

    // print
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d\n", multi_dim_arr[x][y]);
        }
        printf("\n");
    }
    
}

