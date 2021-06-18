class Solution:
    def maxScore(self, s: str) -> int:
        
        max = 0;
        for i in range(1,len(s)):
            first = s[0:i]
            second = s[i:]
            sum = first.count("0") + second.count("1")
            if sum>max:
                max = sum
        return max
        
