#include<stdio.h>

int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        continue;
        else{
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
            for(j=1;j<=i;j++)
            {
               
                printf("*");
                printf(" ");
                
            }
            printf("\n");
        }

    }

}