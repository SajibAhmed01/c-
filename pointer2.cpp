#include<iostream>
using namespace std;
int main()
{
    int x,y,temp;
    int *ptr,*ptr1;
    cout<<"please input the two number = ";
    cin>>x>>y;
    ptr=&x;
    ptr1=&y;

    cout<<"precious value:"<<*ptr<<endl<<*ptr1<<endl;
    cout<<"previos add :"<<&*ptr<<endl<<&*ptr1<<endl;

    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;

    cout<<"swoping value: "<<*ptr<<endl<<*ptr1<<endl;
    cout<<"present add:"<<&*ptr<<endl<<&*ptr1<<endl;
    return 0;
}
