class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        vector<int>prefixsum;
        prefixsum.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            prefixsum.push_back(prefixsum[i-1]+nums[i]);
        }
        unordered_map<int,int>hash;
        
        for(int j=0;j<prefixsum.size();j++){
            if(prefixsum[j]==k) count++;
           int val=prefixsum[j]-k;
            if(hash.find(val)!=hash.end()) 
            len=max(max,j+1)
            if(hash.find(prefixsum[j])==hash.end())
             hash[prefixsum[j]]=0;
             hash[prefixsum[j]]++;
        }
        
    return count;
    }
};
