#include <iostream>
using namespace std;

int printNreverse(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return printNreverse(n-1);
}

int main(){
cout<<"enter no. of number you want to print ";
int n;
cin>>n;
printNreverse(n);
return 0;
}