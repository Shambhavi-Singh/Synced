class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int lenShortest=INT_MAX, n=strs.size();
        if(n==1)return strs[0];
        for(int i=0;i<n;i++){
            if(strs[i].size()<lenShortest)lenShortest=strs[i].size();
        }


        for(int i=0;i<lenShortest;i++){
            char temp=strs[0][i];
            bool isCommon=true;
            for(int j=1;j<n;j++){
                if(strs[j][i]!=temp){
                    isCommon=false;
                    break;
                }
            }
            if(isCommon)ans+=temp;
            else break;            
        }
        return ans;
    }
};