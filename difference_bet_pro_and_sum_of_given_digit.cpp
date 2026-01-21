#include<iostream>
using namespace std;
int main(){
      int n,ld,pro=1,sum=0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    

    while (n>0)
    {
        ld=n%10;
        n=n/10;
        pro=pro*ld;
          sum=sum+ld;
    }
    cout<<pro<<endl;
    cout<<sum<<endl;

    int difference;
    difference=pro-sum;
    cout<<"the difference between product and sum of digits will be:"<<difference<<endl;
}