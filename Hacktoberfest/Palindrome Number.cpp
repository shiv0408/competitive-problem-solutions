/** Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.
**/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int temp=x;
        long ans=0;
       
        while(x!=0){
            int rem=x%10;
            ans=ans*10+rem;
            x=x/10;
        }
        if(ans==temp){
            return true;
        }
        return false;
    }
};
        