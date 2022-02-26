#include<stdio.h>
void main()
{
    int i,j,temp,x,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=n-1;
        x=i;
        for(j=1; j<=i; j++)
        {
            if(x+64<=90){
            printf("%c",x+64);
            x=x+temp;
            temp--;
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
