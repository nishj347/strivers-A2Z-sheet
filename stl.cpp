// Author: nishj347@ github
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>  // Required for std::pair
using namespace std;

void extra() {
    vector<int> arr = {5, 9, 12, 6, 4, 74, 35, 67};
  
    sort(arr.begin(), arr.end());
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;

    if (p1.first > p2.first) return true;
    return false;
}

void extra2() {
    pair<int, int> arr[] = {{1, 2}, {4, 1}, {2, 6}, {8, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, comp);

    for (int i = 0; i < n; i++) {
        cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
    }
    cout << endl;
}

int main() {
    extra();
    extra2();
    return 0;
}


// stack
#include <bits/stdc++.h>
using namespace std;
void explain(){
    stack<int>st;

    st.push(9);
    st.emplace(8);
    st.push(3);
cout<<st.top()<<endl;
}


void priority(){
    priority_queue<int>pq;
    pq.push(3);
    pq.push(98);
    pq.push(32);//max heap
    cout<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(8);//min heap
    pq1.push(67);
    pq1.push(67);
    cout<<pq1.top();
}
int main(){
    explain();
    priority();

    return 0;
}


// vectors
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<stack>
using namespace std;
int demo(){

    pair<int,int>arr[]={{1,3},{2,4}};
    cout<<arr[1].first<<endl;;
    return 0;
}

int demo2(){
    vector<int>v(5);
    v.push_back(2);
    v.push_back(8);
    for (int i = 0; i<  v.size(); i++) {
        cout << v[i] << " "; 
    }
    cout << endl;

    return 0;  
}
int demo3(){
    vector<int>v(5);
    v.push_back(2);
    v.push_back(8);
    for (vector<int>::iterator i=v.begin();i!=v.end();i++) {
        i=i+2;
        cout << *i << " ";  
    }
    cout << endl;

    return 0;  
}





int main(){
    demo();
    demo2();
    demo3();

}



