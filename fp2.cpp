//after return function will be terminate


#include<iostream>
using namespace std;
void usa(){          //function declare
    cout<<"hello my name is ashutosh.";
    return;
     cout<<"hello my name is ashutosh.";
}
void india(){            //we use void because we do not want to return value
    cout<<"you are in india.";
    return;
}
int main(){
    usa();    //function call
    india();
}