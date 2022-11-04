#include <stdio.h>

int main() 
{
    int t,i;
    long int arr[1000];
    long int s=0;
    
    scanf("%d",&t);
    
    
    for(i=0;i<t;i++)
    {
        scanf("%ld",&arr[i]);
    }
    
    for(i=0;i<t;i++)
    {
        s = s + arr[i];
    }
    printf("%ld",s);
    
    return 0;
}