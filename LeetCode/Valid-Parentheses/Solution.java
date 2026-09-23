1class Solution {
2    public boolean isValid(String s) {
3        Stack<Character> stack = new Stack<>();
4        for(char c : s.toCharArray()){
5            if(c == '(' || c == '{' || c == '[') stack.push(c);
6            else{
7                if(stack.isEmpty())return false;
8                if((c == ')' && stack.peek() != '(')
9                || (c == ']' && stack.peek() != '[')
10                || (c == '}' && stack.peek() != '{')){
11                    return false;
12                }else{
13                    stack.pop();
14                }
15            }
16        }
17        return stack.isEmpty();
18    }
19}