#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"enter the side:"<<endl;
    cin>>n;


   for(i=1;i<=n;i++)
   {
     
       if(i%2==0)
       {
            for(j=1;j<=i;j++){
             cout<<j;
             }
    }

   else{
            for(j=65;j<=i+64;j++)
         {
           cout<<char(j);
           }

   }
   
    cout<<endl;
   }
    return 0;
}