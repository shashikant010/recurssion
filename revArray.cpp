#include <iostream>
using namespace std;

void reverseArr(int arr[],int n){
 for (int i = 0; i < n/2; i++)
 {
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
 }
 return;
}

void revWithRec(int arr[],int l,int r){
   
   if (l>=r)
   {
     return;
   }
   swap(arr[l],arr[r]);
   revWithRec(arr,l+1,r-1);
   

}


int main(){

int n;
cout<<"enter the size of array you want to reverse : ";
cin>>n;
cout<<"enter the elements of array you want to reverse  : ";
int arr[n];
int size=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

reverseArr(arr,n);

cout<<"reverse of your array is ";
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

revWithRec(arr,0,n-1);

cout<<"reverse of your array using recursion is ";
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}