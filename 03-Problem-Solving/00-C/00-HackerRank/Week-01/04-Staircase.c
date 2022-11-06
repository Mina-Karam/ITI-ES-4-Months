void staircase(int n) 
{
    int i, j, s = 0, pattern = 0;
    
    for(i = 0; i < n; i++)
    {
        s = n - (i+1);
        for(j = 0; j < s; j++)
        {
            printf(" ");
        }

        pattern = i + 1;

        for(j = 0; j < pattern; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
