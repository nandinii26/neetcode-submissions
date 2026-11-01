class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        vector<int>ans;
        for(int it:nums){
            f[it]++;
        }
        for(int i=k;i>0;i--){
            int maxi=0;
            int num=0;
       for(auto& it:f){
        if(maxi<it.second){
            maxi=it.second;
            num=it.first;
        }
       }
       ans.push_back(num);
       f.erase(num);
        } 
        return ans;
    }
};
