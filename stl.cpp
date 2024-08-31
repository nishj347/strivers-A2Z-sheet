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
