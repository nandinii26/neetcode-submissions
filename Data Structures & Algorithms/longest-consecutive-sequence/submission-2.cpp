class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp.insert(nums[i]);
        }
        int mx=0;
        for(auto& n:mpp){
           if(mpp.find(n-1) ==mpp.end()){
            int curr=n;
            int count=1;
           
           while(mpp.find(curr+1) !=mpp.end()){
            count++;
            curr=curr+1;
           }
           mx=max(mx,count);
        }
        }
        return mx;
    }
};
