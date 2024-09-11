// Author: nishj347 @github
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0}; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 13) {
            hash[arr[i]] += 1;
        }
    }

    int q;
    cout << "enter the number of queries: ";
    cin >> q;
    cout << "enter your queries:\n";
    while (q--) {
        int numbers;
        cin >> numbers;
        if (numbers < 13) {  
            cout << "occurrences of " << numbers << ": " << hash[numbers] << endl;
        } else {
            cout << numbers << " is out of bounds!" << endl;
        }
    }
    return 0;
}
