#include<bits/stdc++.h>
using namespace std;
      
int main()
{
    int info[12]={0,0,201,402,325,101,301,251,0,0,385,0};
    int link[12]={0,0,8,0,11,3,5,7,0,0,4,0};
    int ptr=6,item,a=0;
    cin>>item;
    while(ptr!=0)
    {
        if(item==info[ptr-1])
        {
            a=1;
            break;
        }
        else
        {
            ptr=link[ptr-1];
        }
    }
    if(a==1) cout<<"Found";
    else cout<<"Not found";
    return 0;
}