#include <iostream>
using namespace std;

int printNnumber(int i,int n){
    if(i>n){
        return 0;
    }
    cout<<i<<" ";
    return printNnumber(i+1,n);
}

int main(){
cout<<"enter no. of number you want to print ";
int n;
cin>>n;
int i=1;
printNnumber(i,n);
return 0;
}