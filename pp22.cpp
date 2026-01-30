#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the side:"<<endl;
    cin>>n;
    
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    {
        cout<<2*j<<" ";
    }
    cout<<endl;
   }
 
    return 0;
   }
    
