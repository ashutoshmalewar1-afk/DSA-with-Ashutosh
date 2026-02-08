#include<iostream>
using namespace std;
int main(){
    int i,n,j,k;
    cout<<"enter the side."<<endl;
    cin>>n;
    int star=n;
    int space=1;

    for(i=1;i<=2*n+1;i++){            //first line
        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<=n;i++){                
      
      for(k=1;k<=star;k++){            //star
        cout<<"*";
       }
       
       for(j=1;j<=space;j++){         //space
        cout<<" ";
       }
      
       for(k=1;k<=star;k++){           //star
        cout<<"*";
       }
        
       star--;
        space+=2;
        cout<<endl;
        }
         return 0;
        }
       

         //n=4
       //*********
       //**** ****
       //***   ***
       //**     **
       //*       *
    