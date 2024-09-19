#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void ms(vector<int>& arr, int low, int high) {
    if(low >= high) return;  // Base case for single element
    
    int mid = (low + high) / 2;
    
    ms(arr, low, mid);       // Sort the left half
    ms(arr, mid + 1, high);  // Sort the right half
    merge(arr, low, mid, high);  // Merge the two sorted halves
}

void mergesort(vector<int>& arr, int n) {
    ms(arr, 0, n - 1);  // Start the merge sort process
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);  // Declare a vector of size n
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergesort(arr, n);

    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
