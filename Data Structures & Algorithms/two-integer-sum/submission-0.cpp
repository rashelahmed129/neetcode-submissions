class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int l=0;
        for(int x:nums){
            if(mpp.find(target-x)!=mpp.end()){
                return {mpp[target-x],l};
            }
            mpp[x]=l;
            l++;
        }
        return {};
        }
    };  
