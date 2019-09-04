#include<iostream>
#include<list>
#include<utility>
#define pi pair<int,int>
using namespace std;
int main(){
list<pi> *ls;
int test_cases,start,last,res=0;
cin>>test_cases;
ls=new list<pi>[test_cases];
for(int i=0;i<test_cases;i++){
cin>>start;
cin>>last;
ls[i].push_back(make_pair(start,last));
}

for(int i=0;i<test_cases;i++){
for(auto j=ls[i].begin();j!=ls[i].end();j++){
for(int k=(*j).first; k<=(*j).second; k++){
res=res^k;
}
if(res&1){
cout<<"Odd"<<"\n";
}
else{
cout<<"Even"<<"\n";
}
res=0;
}
}

return 0;}
