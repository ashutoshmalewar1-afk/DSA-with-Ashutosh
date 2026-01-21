#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of element you want in array:"<<endl;
    cin>>n;
    
    

   int arr[n]; 
   cout<<"enter the element of array:"<<endl;
   for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search;
    cout<<"enterr the element you want to search:"<<endl;
    cin>>search;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
        found=true;
        break;
    }
    }
    if(found){
        cout<<"element found.";
    }
    else{
        cout<<"element not found";
    }
    
}