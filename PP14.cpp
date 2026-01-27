#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the side:"<<endl;
    cin>>n;
    
   for(i=1;i<=n;i++)
   {
   
    for(j=1;j<=n+1-i;j++)           //for ulta star the condition is j<=n+1-i
    {
        cout<<"*";
        
    }
    cout<<endl;
   }
    return 0;
}