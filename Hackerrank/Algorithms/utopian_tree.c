// C
// link: https://www.hackerrank.com/challenges/utopian-tree

#include <stdio.h>

int main()
{
    int N,T,i,j,height;
    while(1)
    {
        scanf("%d",&T);
        if(T>=1 && T<=10)
            break;
        else
            printf("Enter a correct value\n");
    }
    for(i=1; i<=T; i++)
    {
        height=1;
        while(1)
        {
            scanf("%d",&N);
            if(N>=0 && N<=60)
                break;
            else
                printf("Enter a correct value\n");
        }
        if(N==0)
        {
            printf("1\n");
            continue;
        }
        for(j=1; j<=N; j++)
        {
            if(j%2==0)
                height++;
            else
                height*=2;
        }
        printf("%d\n",height);
    }
    return 0;
}
