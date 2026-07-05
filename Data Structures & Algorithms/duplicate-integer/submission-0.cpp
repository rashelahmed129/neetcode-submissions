class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<long long>st;
       for(long long num:nums){
            if(st.find(num)!=st.end()){
                return true;
            }
            st.insert(num);
       } 
       return false;
    }
};