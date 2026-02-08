#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the side:"<<endl;
    cin>>n;
    int min=0;
    for(i=1;i<=2*n-1;i++){
      for(j=1;j<=2*n-1;j++){
       int a=i;
      if(i>n){
      a=2*n-i;
       }

       int b=j;
       if(j>n){
         b=2*n-j;
       }
       
       
       if(a>b) min=b;
       else min=a;
       cout<<n+1-min;
      }
cout<<endl;
    }
    return 0;
}
// }#include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"enter the side:"<<endl;
//     cin>>n;
//     int min=0;
//     for(i=1;i<=2*n-1;i++){
//       for(j=1;j<=2*n-1;j++){
//        int a=i;
//       if(i>n){
//       a=2*n-i;
//        }

//        int b=j;
//        if(j>n){
//          b=2*n-j;
//        }
       
       
//        if(a>b) min=b;
//        else min=a;
//        cout<<n+1-min;
//       }
// cout<<endl;
//     }
//     return 0;
// }
         
    
         
    