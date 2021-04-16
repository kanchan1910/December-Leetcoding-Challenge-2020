class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        if(len==1){
            if(flowerbed[0]==1){
                if(n==0){
                    return true;
                }
                else{
                  return false;   
                }
            }
            else{
                if(n<=1){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        int count=0;
        for(int i=0;i<len;i++){
            if(flowerbed[i]==1){
                continue;
            }
            else{
                if(i==0&&i+1<len&&flowerbed[1]==0){
                    count++;
                    flowerbed[0]=1;
                    
                }
                else if(i==len-1&&i-1>=0&&flowerbed[i-1]==0){
                    count++;
                    flowerbed[i]=1;
                }
                else if(i+1<len&&i-1>=0&&flowerbed[i-1]==0&&flowerbed[i+1]==0){
                    count++;
                    flowerbed[i]=1;
                }
            }
        }
        if(count>=n){
            return true;
        }
        return false;
    }
};
