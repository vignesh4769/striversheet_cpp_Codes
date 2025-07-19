#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseanumber(int n) {
        int reversed = 0;
        while (n > 0) {
            if(reversed> INT_MAX/10 || (reversed==INT_MAX/10 && n%10>7))return 0;
            if(reversed< INT_MIN/10 || (reversed==INT_MIN/10 && n%10<-8))return 0;
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return reversed;
    }

     bool isPalindrome(int n) {
        if (n < 0) return false; 
        int original = n;
        int reversed = 0;
        while (n > 0) {
            if(reversed> INT_MAX/10 || (reversed==INT_MAX/10 && n%10>7))return false;
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return original == reversed;
    }

     int GCD(int n1,int n2) {
        int a=max(n1,n2);
        int b=min(n1,n2);
        int rem=1;
        while(rem!=0){
            rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
    int LCM(int n1,int n2) {
        return (n1 * n2) / GCD(n1, n2);
    }
    bool isArmstrong(int n) {
        int res=0;
        int t=n;
        string temp=to_string(n);
        int p=temp.size();
        while(n!=0){
            int x=n%10;
            res+=pow(x,p);
            n/=10;
        }
        return res==t;
    }

    vector<int> divisors(int n) {
        vector<int>res;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                res.push_back(i);
                if(i!=n/i){
                    res.push_back(n/i);
                }
            }
            sort(res.begin(),res.end());
        }
        return res;
    }

    bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;  // Handle even numbers
    for(int i = 3; i * i <= n; i += 2) {  // Only check odd numbers
        if(n % i == 0) return false;
    }
    return true;
}
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    // cout << sol.reverseanumber(n) << endl;

    // cout << (sol.isPalindrome(n) ? "true" : "false") << endl;

    // cout << sol.GCD(n, 10) << endl;
    // cout << sol.LCM(n, 10) << endl;

    // cout << (sol.isArmstrong(n) ? "true" : "false") << endl;

    // vector<int> divs = sol.divisors(n);
    // for(int d : divs) {
    //     cout << d << " ";
    // }

    cout << (sol.isPrime(n) ? "true" : "false") << endl;



    return 0;
}