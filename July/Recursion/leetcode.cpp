#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string ns="";
        for(auto k:s){
            if(isalnum(k))ns+=tolower(k);
        }
        int start=0,end=ns.size()-1;
        while(start<end){
            if(ns[start]!=ns[end])return false;
            start++;
            end--;
        }
        return true;
    }

    int fib(int n) {
        int p1=0,p2=1;
        if(n==1)return 1;
        if(n==2)return 1;
        int cur=0;
        for(int i=2;i<=n;i++){
            cur=p1+p2;
            p1=p2;
            p2=cur;
        }
        return cur;
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    Solution obj;
    if (obj.isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    int n;
    cout << "Enter a number for Fibonacci calculation: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << obj.fib(n) << endl;
    
    return 0;
}