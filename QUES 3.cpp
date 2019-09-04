#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
string *arr,str;
cin>>n;
arr=new string[n];
for(int i=0;i<n;i++){
cin>>str;
arr[i]=str;
}
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++)
if(arr[i][0]>arr[j][0]){
swap(arr[i],arr[j]);
}}
cout<<"\n"<<"\n"<<"\n";
for(int i=0;i<n;i++){
cout<<arr[i]<<"\n";
}


return 0;}
