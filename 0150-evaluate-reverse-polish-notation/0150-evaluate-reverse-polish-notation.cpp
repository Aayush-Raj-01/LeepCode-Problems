class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> bruh;

        for(string c : tokens){
            if(c == "+"){
                int b = bruh.top();
                bruh.pop();
                int a = bruh.top();
                bruh.pop();
                bruh.push(a+b);
            }
            else if(c == "-"){
                int b = bruh.top();
                bruh.pop();
                int a = bruh.top();
                bruh.pop();
                bruh.push(a-b);
            }
            else if(c == "*"){
                int b = bruh.top();
                bruh.pop();
                int a = bruh.top();
                bruh.pop();
                bruh.push(a*b);
            }
            else if(c == "/"){
                int b = bruh.top();
                bruh.pop();
                int a = bruh.top();
                bruh.pop();
                bruh.push(a/b);
            }
            else{
                int num = stoi(c);
                bruh.push(num);
            }
        }
        return bruh.top();
        
    }
};