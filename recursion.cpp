// Author: nishj347 @github
// 1ton
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



// print name:
#include<iostream>
#include<string>
using namespace std;
int count=1;
string demo(int n){
    if(count==n){
        return "done";
    }

    cout<<"adi"<<endl;
    count++;
    demo(n);
}

int main(){
    int n;
    cout<<"enter the times name is to be printed:"<<endl;
    cin>>n;
    cout<<demo(n);
    return 0;
}

// backtracking:
#include<iostream>
using namespace std;
void demo(int n){
    if (n>1){
        return;
    }
    demo(n-1);
    cout<<n<<endl;
}

int main(){
    demo(4);
    return 0;
}

// sum:
#include <iostream>
using namespace std;
int  demo(int i, int sum=0){
    if (i<1){
        return 0;
    }
    return i+ demo(i-1);
}

int main(){
    int result=demo(5);
    cout<<result;
    return 0;
}

// reverse array
#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int i = 0;
    int end = n - 1;
    while (i < end) {
        swap(arr[i], arr[end]);
        i++;
        end--;
    }
}

int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];  

    cout << "enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    reverse(arr, n); 

    cout << "reversed : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  
    }

    return 0;
}

// string palindrome
#include<iostream>
#include<string>
using namespace std;


bool palindrome(string str) {
    int i = 0;
    int end = str.length()- 1;
    while (i < end) {
        if (str[i]!=str[end]){
            return false;

        }
        i++;
        end--;
    }
}


int main() {
    string str;
    cout << "enter string: ";
    cin >> str; 
    if (palindrome(str)) {
        cout << str << " is a palindrome" << endl;
    } 
    else {
        cout << str << " is not a palindrome" << endl;
    }

    return 0;
}

// fiboanacci
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){
    return n;
    }
    // if(n==0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"fibonacci series:"<<endl;
    // for(int i=0;i<n;i++){
        cout<<fibonacci(n)<<endl;
    // }
        return 0;
    

}






