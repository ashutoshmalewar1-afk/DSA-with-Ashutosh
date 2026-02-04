#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the side:"<<endl;
    cin>>n;   
    int space=n/2;
    int star=1;
    int middle_line=(n/2)+1;                                       //n is always odd.
   for(i=1;i<=n;i++){
      
      for(j=1;j<=space;j++){
          cout<<" ";
      }
      for(k=1;k<=star;k++){
         cout<<"*";
      }

      if(i < middle_line){
        
        space--;
        star+=2;
      }

      else{
        space++;
        star-=2;
      }
     cout<<endl;
   }
          
     return 0;
   }