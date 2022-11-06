void plusMinus(int arr_count, int* arr)
{
    float positiveNum = 0,negativeNum = 0,zeroNum = 0;
    
    for (int i = 0; i < arr_count; i++) 
    {
        if(arr[i] > 0)
            positiveNum++;
        else if(arr[i] < 0)
            negativeNum++;
        else 
            zeroNum++;
    }
    
    printf("%0.6f\n%0.6f\n%0.6f", positiveNum / arr_count, negativeNum / arr_count, zeroNum / arr_count);
}