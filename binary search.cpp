#include<iostream>
using namespace std;
int main()
{
    int x,i,left,right,mid,item;
    cin>>x>>item;
    int s1[x];
    for(i=0;i<x;i++)
    {
        cin>>s1[i];
    }
    left=0;
    right=(x-1);
        while(left<=right)
        {
            mid=(left+right)/2;
            if(s1[mid]==item)
            {
                cout<<mid<<endl;
                return 0;
            }

            else if(s1[mid]<item)
            {
               left=mid+1;

            }
            else
            {
               right=mid-1;
            }

        }
        cout<<"-1"<<endl;
    return 0;
}
