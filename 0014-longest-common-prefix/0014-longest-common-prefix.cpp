class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
      
        string prefix=str[0];

        for(int i=0;i<str.size();i++){
            while(str[i].find(prefix)!=0){
                prefix=prefix.substr(0, prefix.length()-1);
                if(prefix=="") return "";
            }
        }
        return prefix;
    }
};