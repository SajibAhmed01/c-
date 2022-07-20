#include<iostream>
using namespace std;
int add(int x,int y)
{
    return (x-y);
}
int main()
{
    int num1,num2,sum=0;
    cout<<"Please enter the two number :";
    cin>>num1>>num2;
   sum = add(num1,num2);
    cout<<sum<<endl;
    return 0;
}

