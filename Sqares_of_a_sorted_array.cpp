class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int ans[n];
        int index=n-1;
        int left=0;
        int right=n-1;
        for(int index=n-1;index>=0;index--){
            if(abs(nums[left])>abs(nums[right])){
                ans[index]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[index]=nums[right]*nums[right];
                right--;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
        return nums;
        }
    
};
//tc o(n)
//sc o(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
    return nums;
        
        }
    
};
//tc o(nlogn)
//sc o(1)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<A.size();i++){
            int x=A[i]*A[i];
            pq.push(x);}
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};

//tc o(n)
//sc o(n)
