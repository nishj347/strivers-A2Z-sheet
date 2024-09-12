// Author : nishj347@ github
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int min=i;
        for (int j=i;j<n-1;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

}

void bubblesort(int arr[], int n){
    for (int i = n - 1; i > 0; i--){ 
        for (int j = 0; j < i; j++){  
            if (arr[j] > arr[j + 1]){

                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void insertionsort(int arr[],int n){
    for (int i=1;i<n;i++){
        int j=i;
        while(j>0&& arr[j-1]>arr[i]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}



int main(){
    int n;
    cin>>n;
        int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    // selectionsort(arr,n);
    // bubblesort(arr,n);
    insertionsort(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
