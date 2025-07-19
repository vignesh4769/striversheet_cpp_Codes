#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(int i, int n) {
        if (i == n) return;
        cout << "siddhu ";
        print(i + 1, n);
    }
    void print12n(int i ,int n){
        if(i==n+1)return;
        cout<<i<<" ";
        print12n(i+1,n);
    }
    void printn21(int i ,int n){
        if(i==n+1)return;
        printn21(i+1,n);
        cout<<i<<" ";
    }
    void sumofn(int i ,int n ,int &sum){
        if(i==n+1)return;
        sum+=i;
        sumofn(i+1,n,sum);
    }
    void factorialofn(int i, int n, int &res){
        if(i==n+1)return;
        res*=i;
        factorialofn(i+1,n,res);
    }
    void reversearray(int arr[], int start , int end){
        if(start>=end)return;
        swap(arr[start],arr[end]);
        reversearray(arr,start+1, end-1);
    }

    void printarray(int arr[],int n){
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout << endl;}

};  

//add comments to explain the code
int main(){
    int n;
    cin>>n;
    Solution obj;
    // Call the print function to print "siddhu" n times
    obj.print(0,n);
    cout << endl;

    // Call the print12n function to print numbers from 1 to n
    obj.print12n(1,n);
    cout << endl;

    // Call the printn21 function to print numbers from n to 1
    obj.printn21(1,n);
    cout << endl;

    // Calculate the sum of numbers from 1 to n
    int sum = 0;
    obj.sumofn(1,n,sum);
    cout << sum << endl;

    // Calculate the factorial of n
    int res = 1;
    obj.factorialofn(1,n,res);
    cout << res << endl;

    // Reverse an array of size n
    cout << "Enter " << n << " elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    obj.reversearray(arr,0,n-1);
    obj.printarray(arr,n);
    return 0;
}