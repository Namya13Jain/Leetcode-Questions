//231 Power of two
//level:easy

//approach 1: using dividend-remainder approach
//time complexity: 0(log n), space complexity: 0(1)
bool isPowerOfTwo(int n) {
        if(n==0) return false;
            
            while(n%2==0)
                    n/=2;
            
            return n==1;
    }

//approach 2: using recursion
//time complexity:0(log n) , space complexity: 0(log n)
 bool isPowerOfTwo(int n) {
        if(n==0) return false;
            
        return (n==1 || (n%2==0 && isPowerOfTwo(n/2)));    
    }


//approach 3: using bit manipulation
//Time complexity:0(log n) , space complexity: 0(1)
bool isPowerOfTwo(int n) {
        if(n<=0) return false;
            
            if((n & (~(n-1)))==n){
                    return true;
            }
            return false;
           
    }
