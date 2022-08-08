#include<iostream>
#include<string>
using namespace std;
class student
{
public:

    long long int id;
    long long int phone;
    double cgpa;

    student()
    {
        id=21225103053;
        phone=1571467869;
        cgpa=3.96;
        cout<<"Default constructor"<<endl;
        cout<<"\n"<<id<<" "<<phone<<" "<<cgpa<<endl;
    }
};
int main()
{
    student emran,rakib;
}

