class Solution {
public:
    vector<string>ans;
    string encode(vector<string>& strs) {
     string s="";
     ans=strs;
     for(int i=0;i<strs.size();i++){
        s+=strs[i];
        s+=" ";
     }
     return s;
    }

    vector<string> decode(string s) {
      return ans;
    }
};
