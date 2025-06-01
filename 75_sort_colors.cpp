class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),mid1=0,mid2=n-1,curr=0;
        while(curr<=mid2){
            if(nums[curr]==0){
                nums[curr]=nums[mid1];
                nums[mid1]=0;
                curr++;
                mid1++;
            }
            else if(nums[curr]==2){
                nums[curr]=nums[mid2];
                nums[mid2]=2;
                mid2--;
            }
            else{
                curr++;
            }
        }
    }
};