#include <cmath>
#include <cstdio>
#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int t;
cin>>t;
stack<int> s;
for(int i=0; i<t;i++){
int k;
cin>>k;
 int max;
if(k==1){
    int z;
    cin>>z;
   
if(s.size()==0){
    
    s.push(z);
    max=z;
}
else {
if(z>=max){
  s.push(2*z-max);  
max=z;

}
else {
s.push(z);

}}






}
else if(k==2){

    if(s.top()>max){
   max=2*max-s.top();
   


    }
    s.pop();

    
}
else if(k==3){

cout<<max<<endl;

}

}


    return 0;
}
