class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string ,vector<int>> mp;
        
        for(int i =0 ; i<strs.size();i++){
            string temp =strs[i];
            sort(temp.begin() , temp.end());
            mp[temp].push_back(i);
        }
        
        vector<vector<string>> res;
        for(auto i : mp){
            vector<string> t;
            for(auto j : i.second){
                t.push_back(strs[j]);
            }
            res.push_back(t);
        }
        
        return res;
        
    }
};