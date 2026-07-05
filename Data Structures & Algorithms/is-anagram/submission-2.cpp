class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int freq[26]={0};
        for(char x:s){
            freq[x-'a']++;
        }
        for(char x:t){
            if(freq[x-'a']==0){
                return false;
            }
            freq[x-'a']--;
        }
        return true;
    }
};
