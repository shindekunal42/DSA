class Solution {
    public boolean threeFibonacciSum(int n) {
        int a=0;
        int b=1;
        int c=1;
        int sum =0;
        while(true){
             sum = a+b+c;
            
            if(sum==n){
                return true;
            }
            if(sum>n){
              return false;
            }
            int next = b+c;
            a=b;
            b=c;
            c=next;
        }
      
        
    }
   
}