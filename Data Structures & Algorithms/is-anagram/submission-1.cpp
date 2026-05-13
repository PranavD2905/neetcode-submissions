class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char, int> mpp;
        bool anagram = true;
        for(int i =0; i<s.size(); i++){
            mpp[s[i]] += 1;
        }

        for(int i =0; i<t.size(); i++){
            if(mpp.find(t[i]) != mpp.end()){
                mpp[t[i]]--;
            }
        }

        for(auto it: mpp){
            if(it.second != 0) anagram = false;
        }

        return anagram;
    }
};
