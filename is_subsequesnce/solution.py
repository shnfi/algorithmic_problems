class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j = 0
        i = 0
        successfull = False
        
        while i < len(t) :
            if t[i] == s[j] :
                j += 1
                i += 1

        if j == len(s) : 
            successfull = True

        return successfull
