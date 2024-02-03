#include <iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return 1;
    }
    int last=fibo(n-1);
    int seclast=fibo(n-2);
    return last+seclast;
}
int main(){
cout<<"enter the position of fibonaci you want ";
int n;
cin>>n;
cout<<"the  fibonaci at that position is "<<fibo(n-1);
return 0;
}