class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        int res=0;
        for(auto i:mp) {
            if(i.second>1) {
                res=i.first;
                break;
            }
        }
        return res;
    }
};
