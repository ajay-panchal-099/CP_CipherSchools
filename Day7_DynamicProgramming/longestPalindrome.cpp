class Solution {
public: 
    string expandAroundCenter( string s, int left, int right){ 
    
        
        while( left >= 0 && right < s.length() && s[left] == s[right]){ 
             left--;
             right++;
        }
        
      return s.substr(left+1 , right - left -1);
    }
    
    
    string longestPalindrome(string s) {
        
    int n = s.size();
    int ans_len = 0 ;
    string ans;
    
    for(int i = 0 ;i < n; i++){
        string temp = expandAroundCenter(s , i , i);
        if(temp.size() > ans_len){
            ans_len = temp.size();
            ans = temp;
        }
        
        temp = expandAroundCenter(s , i , i+1);
        
         if(temp.size() > ans_len){
            ans_len = temp.size();
            ans = temp;
        }
    }
        return ans;
        
    }
                           
};