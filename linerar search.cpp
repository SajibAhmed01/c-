#include<iostream>
using namespace std;

int main()
{
    int x,y,i,found=0;
    cin>>x>>y;
    int s1[x];
    for(i=0;i<x;i++)
    {
        cin>>s1[i];
        if(s1[i]==y)
        {
           cout<<i<<endl;
           found=1;
           break;
        }
    }
    if(found==0)
    {
        cout<<"-1"<<endl;
    }
   return 0;
}
