class Solution:
    def secondHighest(self, s: str) -> int:
        digits = []
        for letter in list(s):
            if letter.isdigit():
                digits.append(int(letter))
        if len(digits)<2:
            return -1
        
        digits.sort()
        n = len(digits)
        
        max1 = digits[n-1]
        max2 = digits[0]
        if max1 == max2:
            return -1
        for digit in digits:
            if digit>max2 and digit!=max1:
                max2 = digit
        return max2
