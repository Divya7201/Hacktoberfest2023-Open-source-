// Array Sum
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter size of array :";
cin>>n;
int arr[n];
cout<<"enter array elements ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++){
sum+=arr[i];
}
cout<<"Sum of array elements :"<<sum<<endl;
return 0;
}
