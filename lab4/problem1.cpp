#include<bits/stdc++.h>
using namespace std;
      
      
int main()
{
    char INFO[13]={' ',' ','U','E','C','R','T','E',' ',' ','S',' '};
    int LINK[12]={0,0,8,0,11,3,5,7,0,0,4,0};
    int ptr=6;
    while(ptr!=0){
        cout<<INFO[ptr-1];
        ptr=LINK[ptr-1];
    }
    return 0;
}