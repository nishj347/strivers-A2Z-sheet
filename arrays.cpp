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

// secpndlargest
    #include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int>&arr,int n){
    int largest=0;
    int slargest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}

int secondsmallest(vector<int>&arr,int n){
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;

    for (int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}



int main(){
    vector<int>arr={1,2,6,3,9,3,10,32,53};
    int n=arr.size();
    cout<<secondlargest(arr,n)<<endl;
    cout<<secondsmallest(arr,n);
    return 0;
}
