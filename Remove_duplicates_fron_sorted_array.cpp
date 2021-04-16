class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return n;
        }
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>2){
                    nums.erase(nums.begin()+i);
                    i--;
                    count--;
            }
        }
        return nums.size();
    }
};

