#include<iostream>
using namespace std;
int main()
{
    int x,i,sum=0;
    cin>>x;
    int s1[x],*p1;
    for(i=0;i<x;i++)
    {
        scanf("%d",&s1[i]);
    }
    for(i=0;i<x;i++)
    {
        p1=&s1[i];
        sum+=*p1;
        cout<<"new value ="<<*p1<<endl;
        cout<<&*p1<<endl;
    }
    cout<<"addition="<<sum<<endl;
    return 0;
}
