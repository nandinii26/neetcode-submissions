class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int mx2=stones[stones.size()-2];
        int mx=stones[stones.size()-1];
            int ans=0;
            if(mx2==mx) ans=0;
            else 
             ans=mx2>mx?mx2-mx:mx-mx2;
            stones.pop_back();
            stones.pop_back();
         if(ans!=0)
            stones.push_back(ans); 
        }
        return stones.empty()?0:stones[0];
    }
};
