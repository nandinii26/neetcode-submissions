class Solution {
public:
    int minOperations(string s) {
      int pattern1=0;
      int pattern2=0;
      for(int i=0;i<s.length();i++){
        if(i%2==0){
            if(s[i]!='0') pattern1++;
            else{
                if(s[i]!='1') pattern2++;
            }
        }
        
        else{
            if(s[i]!='1') pattern1++;
            else{
                if(s[i]!='0') pattern2++;
            }
        }
      }
      return min(pattern1,pattern2);

    }
};