1class Solution {
2    public List<Integer> addToArrayForm(int[] num, int k) {
3        List<Integer> lst = new ArrayList<>();
4        int n = num.length -1;
5        int i = 0;
6        while(n>=0 || k>0 || i>0){
7            int sum = i;
8            if(n>=0){
9                sum = sum + num[n--];
10            }
11            if(k>0){
12                sum = sum + k%10;
13                k = k/10;
14            }
15            lst.add(0,sum%10);
16            i = sum / 10;
17        }
18        return lst;
19    }
20}