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


// nto1
#include<iostream>
using namespace std;

void demo(int i,int n){

if (i<1){
    return;
}
cout<<i<<endl;
demo(i-1,n);


}

int main(){
    int n;
    cin>>n;
    demo(n,n);
    return 0;
}



