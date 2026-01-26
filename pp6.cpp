#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"enter the side:"<<endl;
    cin>>n;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
        cout<<char(j+96);
        
    }
    cout<<endl;
   }
    return 0;
}