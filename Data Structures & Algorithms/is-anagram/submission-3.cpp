class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()){
            return false;
        }
        int i=0;
        unordered_map<char,int> mp;
        unordered_map<char,int> sp;
        for(i;i<s.size();i++){
            mp[s[i]]++;
            sp[t[i]]++;
        }

       return mp==sp;
    }
};
