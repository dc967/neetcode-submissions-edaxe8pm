class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
          int n = nums.size();

          unordered_map<int,int> mp;

          for(int s : nums){
            mp[s]++;
          }

            for(auto it : mp){
                if(it.second > 1){
                    return true;
                }
            }
            return false;

    }
};