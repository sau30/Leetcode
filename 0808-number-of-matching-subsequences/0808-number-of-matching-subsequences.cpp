
class Solution {
public:
    bool issub(string& s, string& p, int i, int j){
        if(j==p.size())return true;
        if(i==s.size() || j==p.size())return false;
        if(s[i]==p[j])return issub(s,p,i+1,j+1);
        else return issub(s,p,i+1,j);
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=words.size();
        int ans=0;
        map<string,int> m;
        for(int i=0;i<n;i++){
            if(m[words[i]])ans+=m[words[i]];
            else{m[words[i]]=issub(s,words[i],0,0); ans+=m[words[i]];}
        }
        return ans;
    }
};