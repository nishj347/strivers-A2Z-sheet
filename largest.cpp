#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n)
int largestno(vector<int>&arr,int n){
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
        return largest;
}

int main(){
    vector<int>arr={1,2,6,3,9,3,10,32,53};
    int n=arr.size();
    cout<<largestno(arr,n);
    return 0;
}
