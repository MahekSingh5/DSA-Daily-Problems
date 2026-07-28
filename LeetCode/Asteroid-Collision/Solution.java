1class Solution {
2    public int[] asteroidCollision(int[] asteroids) {
3        if(asteroids.length<=1)return asteroids;
4        Stack<Integer>stack = new Stack<>();
5        for(int a : asteroids){
6            boolean destroyed = false;
7            while(!stack.isEmpty() && stack.peek()>0 && a<0){
8                if(stack.peek() < -a){
9                    stack.pop();
10                }else if(stack.peek() > -a){
11                    destroyed = true;
12                    break;
13                }else{
14                    stack.pop();
15                    destroyed = true;
16                    break;
17                }
18            }
19            if(!destroyed){
20                stack.push(a);
21            }
22        }
23        int n = stack.size();
24        int ans[] = new int[n];
25        for(int i=0; i<n; i++){
26            ans[i] = stack.pop();
27        }
28        int i=0, j=n-1;
29        while(i<j){
30            int temp = ans[i];
31            ans[i] = ans[j];
32            ans[j] = temp;
33            i++;
34            j--;
35        }
36        return ans;
37    }
38}