class Solution {
public:
    bool isPalindrome(int x) {
        

       int o=x;
       long r=0;
        while (x>0){
            int d=x%10;
            r= r*10+d ;
            x=x/10;
        }
        if(o==r){
            return true;
        
        }
        return false;
    }
};