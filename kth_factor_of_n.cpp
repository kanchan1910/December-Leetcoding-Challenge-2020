class Solution {
public:
    int kthFactor(int n, int k) {  
        for (int i = 1; i <= n; i++) {
            if (n % i == 0){
              k--;   
            }
            if (k == 0){
              return i;   
            }
        }
        return -1;
    }
};
//tc o(n)

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i<=(n);i++){
            if(n%i==0){
                    v.push_back(i);
            }
        }
        
        if(k>v.size())
            return -1;
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
//tc o(nlogn+n)

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i){
                    v.push_back(i);
                }
                else{
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        sort(v.begin(),v.end());
        if(k>v.size())
            return -1;
        return v[k-1];
    }
};

//tc o(nlogn+sqrt(n))
