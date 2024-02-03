#include <iostream>
using namespace std;


bool checkPalin(string s,int l,int r){
   
   if (s[l]!=s[r])
   {
     return false;
   }
   if(l>=s.size()/2){
    return true;
   }
    if(l<r){
   return checkPalin(s,l+1,r-1);
    }

}


int main(){

string s;
cout<<"enter the string you want to check : ";
cin>>s;
int size=s.size();
bool ispalin=checkPalin(s,0,size-1);
cout<<ispalin;
return 0;
}