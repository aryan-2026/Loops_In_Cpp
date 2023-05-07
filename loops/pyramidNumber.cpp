#include<stdio.h>

int main()
{
    int i,j,n,l,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
            for(j=i;j>1;j--)
            {
               
                printf("%d",j);
               /* printf(" ");*/
                
            }
            for(l=1;l<=i;l++)
            {
                printf("%d",l);
               /* printf(" ");*/
            }
            printf("\n");
        

    }

}