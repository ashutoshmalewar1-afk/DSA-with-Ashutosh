#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of element you want to enter in array:";
    cin>>n;

    int arr[n];
    cout<<"the element of array are:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        	if(arr[j]>arr[j+1]){
        		swap(arr[j],arr[j+1]);
			}
		}
	}
    
    int search;
    cout<<"enter the element you want to search:"<<endl;
    cin>>search;

    int first=0;
    int last=n-1;
    while(first<=last){
        int mid=(first+last)/2;
        if(arr[mid]==search){
            cout<<"element is found at "<<mid<<" index";
            break;
        }
        else if(arr[mid]<search){
           first=mid+1;
        }
        else{
          last=mid-1;
        }
    }
    if(first>last){
        cout<<"element is not found.";
    }
}