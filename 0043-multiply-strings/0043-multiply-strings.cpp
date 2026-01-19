class Solution {
public:
    string multiply(string num1, string num2) {
         int m = num1.size(), n = num2.size();
         std::string res(m + n, '0'); 
        for(int i = num1.size()-1;i>=0;i--){
            for(int j = num2.size()-1;j>=0;j--){
                int pro = (num1[i] - '0')*(num2[j] - '0') ;
                int sum = pro + (res[j+i+1] - '0');
                res[i+j+1] = sum%10 + '0';
                res[i+j] += sum/10;

            }
        }
        size_t start = res.find_first_not_of('0');
        if(start == string::npos) return "0";
        return res.substr(start);
        
    }
};