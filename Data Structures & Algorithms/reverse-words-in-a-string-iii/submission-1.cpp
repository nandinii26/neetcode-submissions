class Solution {
public:
    string reverseWords(string s) {
      int l=0;
      int r=0;
      while(r<s.length()){
        if(s[r]==' '){
            int j=r-1;
            while(l<=j){
             swap(s[l],s[j]);
             l++;
             j--;
            }
            l=r+1;
        }
        else if(r==s.length()-1){
            int j=r;
            while(l<=j){
                swap(s[l],s[j]);
             l++;
             j--;
            }
            }
        r++;
      }
      return s;
    }
};
