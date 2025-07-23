#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void frequencyCount(vector<int>& arr, int n) {
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max)max=arr[i];
        }
        int hash[max+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]+=1;
        }
        cout<<"Number   :   Frequency\n";
        for(int i=0;i<max+1;i++){
            cout<<"    "<<i<<"    : "<<"   "<<hash[i]<<" \n";
        }
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    sol.frequencyCount(arr, n);
    return 0;
} 