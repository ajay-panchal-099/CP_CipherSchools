class Solution {
public:
    
    void Combination( vector<string>& res, string num, vector<string> NumPlate, string digits, int index ){ 
        
        if(num.length() == digits.length()){ 
            res.push_back(num);
            return;
        }
        
        string s = NumPlate[digits[index]-'0'];
        
        for( int i = 0 ; i < s.length(); i++){ 
            
            Combination(res, num+s[i], NumPlate, digits,index+1);
           
        }
    
    }
    vector<string> letterCombinations(string digits) {
        
         vector<string> NumPlate= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        
        vector<string> res;
        if(digits.length() == 0) return res;
        
        Combination(res,"", NumPlate, digits, 0);
        
        return res;
    }
    
};