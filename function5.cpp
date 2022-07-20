#include<iostream>
using namespace std;

int sum(int num1,int num2)
{
    return (num1+num2);
}

int sub(int num1,int num2)
{
    return (num1-num2);
}

int main()
{
    int x,i,a,b,result=0;
    cout<<"Enter the number:";
    cin>>x;
    int s1[x];
    for(i=0;i<x;i++)
    {
        cout<<"\nEnter the two number:";
        cin>>a>>b;
       result =sum(a,b);
        cout<<"\n\nOUTPUT:"<<result<<endl;

    }

     for(i=0;i<x;i++)
    {
        cout<<"\nEnter the two number:";
        cin>>a>>b;
       result =sub(a,b);
        cout<<"\n\nOUTPUT:"<<result<<endl;

    }

    return 0;
}

