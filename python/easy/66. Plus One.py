class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        lenn = len(digits) - 1
        while lenn >= 0:
            if digits[lenn] != 9:
                digits[lenn]+=1
                return digits
            else:
                if lenn == 0:
                    digits[0] = 0
                    digits.insert(0,1)
                    return digits

                digits[lenn] = 0
                lenn -= 1
