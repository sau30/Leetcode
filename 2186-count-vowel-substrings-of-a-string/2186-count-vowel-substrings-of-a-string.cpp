class Solution {
public:
bool isVowel(char ch){
    return (ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int countVowelSubstrings(string word) {
    int n=word.size();
    int count=0;

    for(int i=0;i<n;i++){
    set<char>vowels;
     for(int j=i;j<n;j++){
        if(isVowel(word[j])){
            vowels.insert(word[j]);
            if(vowels.size()==5){
                count++;
            }
        }
            else{
                break;
            }
        }
      }
      return count;
    }
   
};
