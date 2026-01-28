#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the no to find factorial of no:"<<endl;
    cin>>n;
    int fact=1;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    cout<<"the factorial of no is:"<<fact;
    return 0;
}