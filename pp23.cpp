#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the side:"<<endl;
    cin>>n;
    
   for(i=1;i<=n;i++){
   for(j=1;j<=i;j++){
    cout<<((j%2==0)==0)<<" "<<((j%2==0)==1);

   }
   
    
    cout<<endl;
   }
    return 0;
}