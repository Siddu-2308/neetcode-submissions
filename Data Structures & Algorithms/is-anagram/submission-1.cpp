class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> u;
        unordered_map<char,int> v;
        for(char c:s){
            u[c]++;
        }
        for(char c:t){
            v[c]++;
        }
        return u==v ? true :false;
    }
};
