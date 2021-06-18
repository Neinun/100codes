class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s1 = ""
        for i in num:
            s1 = s1 + str(i)
        s1i = int(s1)
        sum = s1i + k;
        res = list(map(int, str(sum)))
        return res
