#include <iostream>
using namespace std;

int sumOfNumberUsingRec(int n){
    if(n==0){
        return 0;
    }
    return n+sumOfNumberUsingRec(n-1);
 

}

//paramaterized way
void sumOfNumberUsingRec(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }

    sumOfNumberUsingRec(i-1,sum+i);
    
 

}

int main(){
 cout<<"enter the number of digit you want to sum ";
 int n;
 cin>>n;
int sum= sumOfNumberUsingRec(n);
cout<<sum<<endl;
sumOfNumberUsingRec(n,0);
return 0;
}