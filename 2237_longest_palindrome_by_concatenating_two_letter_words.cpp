class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> m;
        int ans=0,same=0;
        for(int i=0;i<words.size();i++){
            string rev = string(words[i].rbegin(), words[i].rend());
            if( m[rev]>0){
                if(rev==words[i]){
                    same--;
                }
                m[rev]--;
                ans+=4;
            }
            else{
                if(rev==words[i]){
                    same++;
                }
                m[words[i]]++;
            }
                
        }
        if(same>0)ans+=2;
        return ans;
    }
};