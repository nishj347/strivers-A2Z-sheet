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


// reverseno:
// Example 1:
// Input: N = 123
// Output: 321
// Explanation: The reverse of 123 is 321

// Example 2:
// Input: N = 234
// Output: 432
// Explanation: The reverse of 234 is 432

#include<bits/stdc++.h>
using namespace std;
int reverseno(int n){
    int reverse=0;
    while(n>0){
        int lastdigit= n % 10;
        int reverse=reverse*10+lastdigit;
        n=n/10;
        
    }
    return reverse;
}
int main(){
    int n;
    cout<<"eneter the nummber:";
    cin>>n;
    int result=reverseno(n);
    cout<<result;
    return 0;

}
