#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int t){
        int ml=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                     sum+=nums[j];
                    if(sum==t){
                         ml=max(ml,j-i+1);
                    }
                }
            }
        return ml;
    }

    int longestSubarraywithsumkp(vector<int>&nums, int k) {
        int n=nums.size();
        int maxLength = 0;
        unordered_map<int, int> prefixSumMap;
        int currentSum = 0;
        for(int i=0;i<n;i++){
            currentSum+= nums[i];
            if(currentSum==k){
                maxLength=max(maxLength, i + 1);
            }
            int remainingSum = currentSum - k;
            if(prefixSumMap.find(remainingSum)!=prefixSumMap.end()){
                maxLength=max(maxLength,i-prefixSumMap[remainingSum]);
            }
            prefixSumMap[currentSum] = i;
        }
        return maxLength;
    }
};
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution sol;
    int result = sol.longestSubarraywithsumkp(nums, t);
    
    cout << "Length of Longest Subarray with Sum " << t << ": " << result << endl;
    
    return 0;
}