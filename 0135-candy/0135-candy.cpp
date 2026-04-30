class Solution {
public:
    int candy(vector<int>& ratings) {
        int candy =0,lcandy=0;
        for(int i =0 ; i <ratings.size();i++){
            if(i == 0){
                if(ratings[0] > ratings[1]){
                    candy = 2;
                    lcandy = 2;
                }
                else {
                    lcandy = 1;
                    candy = 1;
                    }
            }
            else if (i!= ratings.size() - 1){
                if(ratings[i] > ratings[i+1] || ratings[i] > ratings[i-1]){
                    candy += lcandy +1;
                    lcandy ++;
                }
                else {
                    candy += 1; 
                    lcandy = 1;
                }
            }
            else{
                if(ratings[i] > ratings[i-1]) candy += lcandy + 1;
                else candy += 1;
            }
        }       
        return candy;
    }
};