#include <stdio.h>

int main()
{
    int i, n, arr[100], sum = 0;
    scanf("%d",&n);
    
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}