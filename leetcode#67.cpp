class Solution {
public:
    string addBinary(string a, string b) {
        
        int num1 = a.length()-1;
        int num2 = b.length()-1;
        
        string result = "";
        int carry = 0;
        
        int digit1,digit2,sum = 0;
        
        
        while(num1>=0 || num2>=0 || carry!=0)
        {
            if(num1>=0)
                digit1 = a.at(num1) - 48;
            else
                digit1 = 0;
            if(num2>=0)
                digit2 = b.at(num2) - 48;
            else
                digit2 = 0;
            
            
            sum = digit1 + digit2 + carry;
            
            if(sum == 0)
            {
                result = "0" + result;
                carry = 0;
            }
                
            else if(sum == 1){
                carry = 0;
                result = "1" + result;
            }
                
            else if(sum == 2){
                carry = 1;
                result = "0" + result;
            }
            else if(sum == 3){
                carry = 1;
                result = "1" + result;
            }
            
            num1--;
            num2--;
        }
        
        
        return result;
        
    
    }
};
