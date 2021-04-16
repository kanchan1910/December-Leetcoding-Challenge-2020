class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int n=nums.size();
        if(n<3){
            return false;
        }
        int minone=INT_MAX;
        int mintwo=INT_MAX;
        for(int i=0;i<n;i++){
            if(minone>nums[i]){   //minimum element in the array
                minone=nums[i];
            }
            if(nums[i]>minone){   //second minimum element which is greater then first minimum element
                mintwo=min(mintwo,nums[i]);   //and that to is done accordingly that such that it is also minimum but greater than first minimum because we have to left place for third element so second element is also choosen minimum accordingly
            }
            if(nums[i]>mintwo){             //if there is third element also after choosing first and second element than return true else false
                return true;
            }
        }
        return false;
    }
};


//tc o(n)
//sc o(1)
