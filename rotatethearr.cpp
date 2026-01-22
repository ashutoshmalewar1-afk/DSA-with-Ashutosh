#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int> &v){
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter no:";
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;  // k is the index for rotate part which come front of array
    cout<<"enter the value of k: ";
    cin>>k;
    if( k>n) k=k%n;
 
    reversepart(0,v.size()-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}