class Solution {
    public int calculate(String s) {
        int result=0;
        int sign = 1;
        int number=0;
        Stack<Integer> stack = new Stack<>();
        for(char c: s.toCharArray()){
            if(c == '('){
                stack.push(result);
                stack.push(sign);
                result = 0 ;
                sign = +1;
            }
            else if (c==')'){
                result += number * sign;
                sign = stack.peek();
                stack.pop();
                number = stack.peek();
                stack.pop();
                result = number + result * sign;
                number = 0;
            }
            else if(c=='+'){
                result = result + number * sign;
                number = 0;
                sign = 1;
            }
            else if(c == '-'){
                result = result + number * sign;
                number = 0;
                sign = -1;
            }
            
            else if(c != ' '){
                number = number*10 + (c - '0');
            }
        }
        result += number * sign;
        return result;
        
    }
}