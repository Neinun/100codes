class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len = digits.size();
        int k = 0;
        int sum = 0;
        int carry = 1;
        int i = len - 1;
        do
        {
            sum = digits[i] + carry;
            if(sum>9)
                carry = 1;
            else
                carry = 0;
            digits[i] = sum%10;
            i--;
        }while(i>=0);
    
    vector<int> result;
   for(auto i:digits)
   {
       result.push_back(i);
   }
        if(carry == 1)
            result.insert(result.begin(),carry);
    return result;
}
};
