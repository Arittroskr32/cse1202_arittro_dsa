#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int LA[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&LA[i]);
    }
    int k;
    scanf("%d",&k);
    for(int j=k-1;j<n;j++)
    {
        LA[j]=LA[j+1];
    }
    for(int i=0;i<n-1;i++)
    {
    printf("%d ",LA[i]);
    }
    return 0;
}