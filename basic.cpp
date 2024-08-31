//Author : nishj347@ github
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks < 25){
        cout << "Grade F";
    }
    else if (marks < 44){
        cout << "Grade E";
    }
    else if (marks < 50){
        cout << "Grade D";
    }
    else if (marks < 60){
        cout << "Grade C";
    }
    else if (marks < 80){
        cout << "Grade B";
    }
    else if (marks <= 100){
        cout << "Grade A";
    }
    else {
        cout << "Invalid marks entered!";
    }

    return 0;
}


->  #include<iostream>
using namespace std;

int main(){
    string s="striver";
    int len=s.size();
    cout<<s[len-1];
    
    return 0;
}
