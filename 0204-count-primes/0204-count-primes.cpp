class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<bool> check(n,false);

        for(int i = 2; i <= (int)sqrt(n) ;i++){
            if(check[i] == false){
                for(int j = i*i; j < n ;j+=i) check[j] = true;
            }
        }

        int ans= 0;
        for(int i = 2 ; i <n;i++){
            if(!check[i]) ans++;
        }
        return ans;
    }
};