class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            if(nums.size() == 1) return nums[0];
            std::sort(nums.begin(), nums.end());
            int pre= nums[0];
            int count = 1;
            for(int i=1; i<nums.size(); i++)
            {
                if(nums[i] == pre)
                {
                    count++;
                    if(count>nums.size()/2)
                        return nums[i];
                }
                else
                {
                    count == 1;
                    pre = nums[i];
                }
            }
        }
};
