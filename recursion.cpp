#include<iostream>
using namespace std;

void demo(int i,int n){
if (i>n){
    return;
}
cout<<i<<endl;
demo(i+1,n);
}
int main(){
    demo(1,4);
    return 0;
}


