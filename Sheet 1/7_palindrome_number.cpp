// Link:


// Aproach1: 
// Convert to string, and reverse
class Solution {
public:
    bool isPalindrome(int x) {
        string newNum = to_string(x);
        reverse(newNum.begin(), newNum.end());
        
        if(to_string(x)==newNum) return true;
        return false;
    }
};


// Appraoch2: (Efficient)
// Reverse half of the number, and compare with remaining half for equality
class Solution {
public:
    bool isPalindrome(int x) {
        if((x < 0) || (x % 10 == 0 && x != 0)) return false;
        
        int rev = 0;
        while(x > rev) {
            rev = (rev*10) + (x % 10);
            x = x / 10;
        }
        if((x == rev) || (x == rev / 10)) return true;
        return false;
    }
};
