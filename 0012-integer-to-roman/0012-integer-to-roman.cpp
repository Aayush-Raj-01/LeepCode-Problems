class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int size = 0,temp=num;
        while(temp){
            temp = temp/10;
            size++;
        }
        if(size==4){
            temp = num/1000;
            while(temp){
                ans += 'M';
                temp--;
            }
            size--;
        num = num - ((num/1000)*1000);
        }
        if(size==3){
            temp = num /100;
            while(temp){
                if(temp == 9){
                    ans += "CM";
                    break;
                }
                if(temp>=5){
                    ans += 'D';
                    temp = temp - 5;
                    continue;
                }
                if(temp==4){
                    ans += "CD";
                    break;
                }
                ans += 'C';
                temp--;
            }
            size--;

        num = num - ((num/100)*100);
        }
        if(size==2){
            temp = num /10;
            while(temp){
                if(temp == 9){
                    ans += "XC";
                    break;
                }
                if(temp>=5){
                    ans += 'L';
                    temp = temp - 5;
                    continue;
                }
                if(temp==4){
                    ans += "XL";
                    break;
                }
                ans += 'X';
                temp--;
            }
            size--;

        num = num - ((num/10)*10);
        }
        if(size==1){
            temp = num ;
            while(temp){
                if(temp == 9){
                    ans += "IX";
                    break;
                }
                if(temp>=5){
                    ans += 'V';
                    temp = temp - 5;
                    continue;
                }
                if(temp==4){
                    ans += "IV";
                    break;
                }
                ans += 'I';
                temp--;
            }

        }
        return ans;
        
    }
};