class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int>ans(nums);
      ans.reserve(2*nums.size());
      for(int num:nums){
        ans.push_back(num);
      }
      return ans;
    }
};