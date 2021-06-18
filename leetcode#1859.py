class Solution:
    def sortSentence(self, s: str) -> str:
        words = s.split(" ")
        result = ""
        temp_result = [""]
        for word in words:
            temp = word[::-1]
            temp_result.append(temp)
        temp_result.sort()
        for word in temp_result:
            temp = word[1:]
            result = result +temp[::-1]+ " "
        return result.strip()
            
        
