// Sample Input 1:
// 121
// Sample Output 1:
// 3
// Explanation of sample output 1:
// There are 3 digits in 121 are 1,2 and 1.
// Sample Input 2:
// 38
// Sample Output 2:
// 2

#include <bits/stdc++.h>
using namespace std;
int countdigits(int n){
    int count=0;
    while(n>0){
        
        n=n/10;
        count++;


    }
       return count;
}

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int result=countdigits(n);
    cout<<result<<endl;
    return 0;


}

// int cnt=(int)(log10(n)+1);
// return cnt;
