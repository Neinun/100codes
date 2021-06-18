class Solution:
    def reformatDate(self, date: str) -> str:
        months=["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
        words = date.split(" ")
        day = words[0][:-2]
        if len(day)<2 : day = "0"+day
        month=str(months.index(words[1])+1)
        if len(month)<2:month="0"+month
        year = words[2]
        
        result = year + "-" +month+ "-" +day  
        return result
        
