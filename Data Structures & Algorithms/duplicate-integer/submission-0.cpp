class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans=false;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]))
            ans=true;
            s.insert(nums[i]);
        }
        return ans;
    }
};