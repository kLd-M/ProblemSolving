class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        copy = x
        xreversed = 0

        while copy/10 > 0:
            xreversed *= 10
            xreversed += copy%10
            copy//=10

        return x == xreversed
