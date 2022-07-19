#include<iostream>
#include<string.h>
using namespace std;

struct student
{
    string name;
    int age;
    float free;
    long long int phone;
    long long int id;
};
int main()
{
    int x,i;
    cin>>x;
     struct student student[x];
    for(i=0;i<x;i++)
    {
        cout<<"\n\npersion :"<<i+1<<endl;
        cout<<"enter the name:";
        cin>>student[i].name;
        cout<<"Enter the age:";
        cin>>student[i].age;
        cout<<"enter the free:";
        cin>>student[i].free;
        cout<<"enter the phone number:";
        cin>>student[i].phone;
        cout<<"enter the id:";
        cin>>student[i].id;
    }
    for(i=0;i<x;i++)
    {
        cout<<"\n\npersion "<<i+1<<endl;
        cout<<"NAME :"<<student[i].name<<endl;
        cout<<"AGE  :"<<student[i].age<<endl;
        cout<<"FREE :"<<student[i].free<<endl;
        cout<<"PHONE:"<<student[i].phone<<endl;
        cout<<"ID   :"<<student[i].id<<endl;

    }
    return 0;

}
