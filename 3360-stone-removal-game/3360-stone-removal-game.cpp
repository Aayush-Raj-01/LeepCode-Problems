class Solution {
public:
    bool canAliceWin(int n) {
        int comp = 10;
        while(true){
                if(comp > n){
                    return false;
                }else{
                    n -= comp;
                }
            comp--;
                if(comp > n){
                    return true;
                }else{
                    n -= comp;
                }
            comp--;
        }
    }
};