import java.util.Stack;
class Solution {
    public int evalRPN(String[] tokens) 
    {
        Stack <Integer> Stack = new Stack<>();
        for(String token : tokens ){
            if (token.equals("+")||token.equals("*")||token.equals("-")||token.equals("/")){
                int b = Stack.pop();
                int a = Stack.pop();
                if(token.equals("+")){
                    Stack.push(a+b);
                }
                else if (token.equals("-")){
                    Stack.push(a-b);
                }
                  else if (token.equals("*"))
                     {
                       Stack.push(a*b);
                      }
                 else if (token.equals("/")){
                    Stack.push(a/b);
                }
            }
            else{
                Stack.push(Integer.parseInt(token));
             }
        
        }
        return Stack.pop();
    }
    
    
}