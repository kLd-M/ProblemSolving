class Solution:
    def romanToInt(self, s: str) -> int:
        Roman_Map = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        prev_value = 0
        ans = 0

        for c in s:
            ans += Roman_Map[c]
            
            if prev_value < Roman_Map[c]:
                ans -=  2* prev_value

            prev_value = Roman_Map[c]
        return ans