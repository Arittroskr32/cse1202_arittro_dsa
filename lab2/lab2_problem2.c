#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int LA[n+1];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&LA[i]);
    }
    int k,x;
    scanf("%d %d",&k,&x);
    for(int i=n;i>=k-1;i--)
    {
        LA[i+1]=LA[i];
    }
    LA[k-1]=x;
    for(int i=0;i<=n;i++)
    {
    printf("%d ",LA[i]);
    }
    return 0;
}