#include<iostream>
using namespace std;
int main(){
float sec,x;
int hours,minutes,seconds;
cout<<"Number of seconds ";
cin>>sec;
x=sec/60.0;
minutes=sec/60;
seconds=(x-minutes)*60;
hours=minutes/60;
cout<<"Hours = "<<hours<<","<<"minutes = "<<minutes<<","<<"seconds = "<<seconds;
return 0;}
