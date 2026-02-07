class Solution {
public:
    void add(vector<int>& digits,int n){
        if(digits[n]==9 && n!=0){
            digits[n]=0;
            return add(digits,n-1);
        }else if(n==0 && digits[n]==9){
            digits[0]=1;
            for(int i =1;i<digits.size();i++){
                digits[i]=0;
            }
            digits.push_back(0);
        }
        else{
            digits[n]+=1;
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        add(digits,n);
        return digits;
        
        
    }
};