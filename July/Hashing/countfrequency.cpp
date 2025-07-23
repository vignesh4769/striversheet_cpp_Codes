#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        map<int,int>m;
        for(auto k:nums){
            m[k]++;
        }
        vector<vector<int>>res;
        for(auto it:m){
            res.push_back({it.first,it.second});
        }
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    vector<vector<int>> result = sol.countFrequencies(nums);
    
    cout << "Number   :   Frequency\n";
    for(int i = 0; i < result.size(); i++) {
        cout << "    " << result[i][0] << "    : " << "   " << result[i][1] << " \n";
    }
    
    return 0;
}