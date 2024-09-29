  #include<bits/stdc++.h>
using namespace std;
  
  bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            if (count>1){
                return false;
            }
        }
        return true;
        
    }


    int main(){
        vector<int> nums={1,78,9,23};
       cout<< check(nums);
        return 0;
    }


//duplicate
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }

   
    int newSize = i + 1; 
    cout << newSize << ", nums = [";
    for (int k = 0; k < newSize; k++) {
        cout << nums[k];
        if (k != newSize - 1) {
            cout << ", ";
        }
    }
    for (int k = newSize; k < nums.size(); k++) {
        cout << ", _";
    }
    cout << "]" << endl;
    return newSize;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3,4,4,4,4,4};
    removeDuplicates(nums);
    return 0;
}

// rotate
#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n,int d){
    d=d%n;

    int temp[d];

    for (int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}    


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int d;
    cin>>d;

    rotate(arr,n,d);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}
