#include <iostream>
using namespace std;
//printing n number using backtracking
void printNnumber(int i,int n){
    if(i==0){
        return ;
    }
printNnumber(i-1,n);
    cout<<i<<" ";
}

int main(){
cout<<"enter no. of number you want to print ";
int n;
cin>>n;

printNnumber(n,n);
return 0;
}