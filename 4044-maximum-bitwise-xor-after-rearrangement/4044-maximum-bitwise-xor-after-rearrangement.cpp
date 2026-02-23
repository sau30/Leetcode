class Solution {
public:
    string maximumXor(string s, string t) {

        int count0 = 0, count1 = 0;

        for(char c : t){
            if(c == '0') count0++;
            else count1++;
        }

        string result = "";

        for(char c : s){
            if(c == '0' && count1 > 0){
                result += '1';
                count1--;
            }
            else if(c == '1' && count0 > 0){
                result += '1';
                count0--;
            }
            else{
                result += '0';
                if(c == '0') count0--;
                else count1--;
            }
        }

        return result;
    }
};