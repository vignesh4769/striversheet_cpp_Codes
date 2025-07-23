#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
      set<int>s;
      for(auto k:nums1)s.insert(k);
      for(auto k:nums2)s.insert(k);

      vector<int>res;
      for(auto k:s)res.push_back(k);
      return res;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1), nums2(n2);
    
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }
    
    Solution sol;
    vector<int> result = sol.unionArray(nums1, nums2);
    
    cout << "Union of Arrays: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}