#include<bits/stdc++.h>
using namespace std;
      
int main()
{
    char info[13]={' ',' ','U','E','C','R','T','E',' ',' ','S',' '};
    int link[12]={0,0,8,0,11,3,5,7,0,0,4,0};
    int ptr=6,a=0;
    char item;
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