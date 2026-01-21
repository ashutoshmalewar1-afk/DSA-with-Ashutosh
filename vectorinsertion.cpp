#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(8);
    cout<<"the element of vector will be:";
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }

    // int n;
    // cout<<"enter the no of element you want to enter in vector:";
    // cin>>n;
    // vector<int> v(n);
    // cout<<"enter the element of vector:";
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // cout<<"the element of vector will be:";
    // for(int i=0;i<v.size();i++){
    // cout<<v[i]<<" ";
    // }
 }