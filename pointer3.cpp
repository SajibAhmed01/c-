#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum=0;
    int *p1,*p2;
    cout<<"Enter the two number:";
    cin>>num1>>num2;
    p1=&num1;
    p2=&num2;
     sum=(*p1+*p2);
     cout<<"addition = "<<sum<<endl;
     return 0;
}
