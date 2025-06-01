class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countZero=0,product=1;
        for(auto i:nums){
            if(i==0)countZero++;
            else product*=i;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && countZero==1){
                nums[i]=product;
            }
            else if(nums[i]==0 && countZero>1){
                nums[i]=0;
            }
            else if(nums[i]!=0 && countZero>0){
                nums[i]=0;
            }
            else if(nums[i]!=0 && countZero==0){
                nums[i]=product/nums[i];
            }
        }
        return nums;
    }
};