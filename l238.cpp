class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> post(nums.size(),1);
        vector<int> pre(nums.size(),1);
        int i = 1;
        int j = nums.size() - 2;
        while(i < nums.size() && j >= 0){
            post[i] = post[i - 1] * nums[i - 1];
            pre[j] = pre[j + 1] * nums[j + 1];
            i++;
            j--;
        }
        i = 0;
        vector<int> res;
        for(; i < nums.size(); i++)
            res.push_back(post[i] * pre[i]);
        return res;
    }
};
