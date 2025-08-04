#approach: count the frequency of each character
# and then calculate the longest palindrome length based on the frequencies manipulating the even and odd counts.


class Solution:
   def longestPalindrome(self, s: str) -> int:
    freq_arr = [0] * 128  
    for c in s:
        freq_arr[ord(c)] += 1
    ans = 0
    for count in freq_arr:
        ans += count // 2 * 2

    if ans < len(s):  
            ans += 1
    return ans


        