#include <iostream>
using namespace std;

int ProductOfNumberUsingRec(int n){
    if(n==1){
        return 1;
    }
    return n*ProductOfNumberUsingRec(n-1);
 

}



int main(){
 cout<<"enter the number of digit you want to product ";
 int n;
 cin>>n;
int Product= ProductOfNumberUsingRec(n);
cout<<Product<<endl;

return 0;
}