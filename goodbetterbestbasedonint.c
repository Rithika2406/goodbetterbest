#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        if (N<=100)
        {
            printf("Good\n");
        }
        else if (N>100 && N<=200)
        {
            printf("Better\n");
        }
        else
        {
            printf("Best\n");
        }
    }
    return 0;
}