int titleToNumber(string s) {
         
        int ans = 0;
        
        for(auto it : s){ 
             ans = ans*26 +(it-'A'+1);
        }
        
        return ans;
 }