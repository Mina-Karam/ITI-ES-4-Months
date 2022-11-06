int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int value_1 = 0, value_2 = 0, abs_value = 0;
    
    for (int i = 0, j = arr_columns-1; i < arr_rows, j >= 0 ; i++, j--)
    {
        value_1 += arr[i][i];
        value_2 += arr[i][j];
    }
    
    abs_value = abs(value_2 - value_1);
    return abs_value;
}