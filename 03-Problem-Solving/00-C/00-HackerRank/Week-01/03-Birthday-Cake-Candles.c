int birthdayCakeCandles(int candles_count, int* candles) 
{
    int numOfHeights = 0, heighest = candles[0];
    
    for (int i = 0; i < candles_count; i++)
    {
        if (candles[i] > heighest) 
        {
            heighest = candles[i];
        }
    }
    for (int i = 0; i < candles_count; i++)
    {
        if (candles[i] == heighest) 
        {
            numOfHeights++;
        }
    }
    
    return numOfHeights;
}