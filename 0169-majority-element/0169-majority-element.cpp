class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map <int, int> count;

        for(int num:nums){
            count[num]++;
            if(count[num]>n/2){
                return num;
            }
        } 
        return -1;
    }
};