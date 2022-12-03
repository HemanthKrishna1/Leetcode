class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        for(char c : s){
            mpp[c]++;
        }
        priority_queue<pair<int,char>> pp;
        for(auto it: mpp){
            pp.push({it.second, it.first});
        }
        string res ="";
        pair<int,char> p;
        while(!pp.empty()){
            p = pp.top();
            pp.pop();
            res+= string(p.first, p.second);
        }
        return res;
        
    }
};
