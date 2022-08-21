#include<iostream>
using namespace std;
int main()
{
    int x,i,j,temp;
    cin>>x;
    int s1[x];
    for(i=0;i<x;i++)
    {
        cin>>s1[i];
    }
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-1-i;j++)
        {
            if(s1[j]<s1[j+1])
            {
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }

    for(i=0;i<x;i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}
