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

// into
#include<iostream>
using namespace std;
int count=1;
void print(){
    if(count==11){
        return;
    }

    cout<<2*count<<endl;
    count++;
    print();
}


int main(){
    print();
    return 0;
}



