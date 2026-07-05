class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int l=0;
        string a=strs.front();
        string b=strs.back();
        while(l<a.size() && l<b.size()){
            if(a[l]==b[l]){
                ans+=a[l];
                l++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};