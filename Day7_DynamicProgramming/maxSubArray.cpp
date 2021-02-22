class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int best = nums[0];
        int localmax= nums[0];
        
        for( int i=1; i< nums.size(); i++){ 
           
            localmax = max(nums[i], localmax+nums[i]);
            
            best = max(best, localmax);
        
        }
        
        return best;
        
    }
};