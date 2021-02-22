class Solution {
public:
    int lengthOfLongestSubstring(string s) {


        int n = s.length();

        if( n== 0 || n== 1) return n;

        int ans = 1;

        int i =0, j = 0;

        unordered_map<char, int> mp;


        while( j < n){

            if(mp.find(s[j]) == mp.end()){
                mp[s[j]]++;
                if(mp.size() > ans)
                    ans = mp.size();
                j++;
            }
            else{
                mp.erase(s[i]);
                i++;

            }

        }



        return ans;
    }
};