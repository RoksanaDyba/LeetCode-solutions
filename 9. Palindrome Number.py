class Solution(object):
    def isPalindrome(self, x):
        sx=str(x)
        for i in range(0,len(sx)//2):
            if sx[i]!=sx[-i-1]:
                return False
        return True
                
