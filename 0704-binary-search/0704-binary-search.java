class Solution {
    public int search(int[] nums, int target) {
        int L=0;
        int H = nums.length - 1;

        while(L<=H){
            int mid=L+(H-L)/2;
            if(nums[mid]==target)
            return mid;

            else if(nums[mid]<target)
            L=mid+1;

            else
            H=mid-1;
        }
        return -1;
    }
}