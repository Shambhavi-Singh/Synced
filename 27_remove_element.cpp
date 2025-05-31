class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,n=nums.size(),j=n-1;
        if(n==0)return 0;
        while(i<=j){
            if(nums[i]==val){
                if(nums[j]!=val){
                    nums[i]=nums[j];
                    nums[j]=val;
                    i++;
                }
                j--;
            }
            if(nums[i]!=val)i++;
        }
        return i;
    }
};