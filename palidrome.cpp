
class Solution {
public:
              //function takes a string as a parameter
    bool validPalindrome(string s) {
              //initilize lo to 0, and hi to the end of the string
        int lo = 0, hi = s.size() - 1;
      
            //send the string, the beggining, end, and 0 in as a parameter
        return validPalindrome(s, lo, hi, 0);
    }
    
           //helper function takes in string as a reference(can be modified), the beggining and end index, and int count
    bool validPalindrome(string &s, int lo, int hi, int count) {
      
          //if count is greater than 1, we return false becuase we would have to remove more than 1 character
        if (count > 1) return false;
      
      //could use a for loop here
      //while we are still looping through the string...
      //we loop through the string from both sides, subtracting from the high and adding to the low
        while (lo < hi) {
            //if the string at index low == index high
            if (s[lo] == s[hi]) {
              //we continue to intirate through the string from both ends
                lo++; hi--;
            }
          
            //if the string at indexes high and low do not equal each other
            else {
                //either 1 of these could be true to return true
              //this calls the function recursivley
                return validPalindrome(s, lo + 1, hi, count + 1) || 
                        validPalindrome(s, lo, hi - 1, count + 1);
            }
        }
      //if we cannot catch any of the above statements then it must be a palidrome
        return true;
    }
};
