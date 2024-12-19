#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j)
        {
            if (isalnum(tolower(s[i])) && isalnum(tolower(s[j])))
            {
                if (tolower(s[i]) != tolower(s[j]))
                    return false;
                else
                {
                    i++;
                    j--;
                }
            }
            else
            {
                if (!isalnum(tolower(s[i])))
                    i++;

                if (!isalnum(tolower(s[j])))
                    j--;
            }
        }

        return true;
    }
};
