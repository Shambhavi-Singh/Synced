class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans=0,last,secondLast;
        for(auto i:operations){
            
            if(i=="+"){
                last=s.top();
                s.pop();
                secondLast = s.top();
                s.push(last);
                ans+=last+secondLast;
                s.push(last+secondLast);
            }
            else if(i=="D"){
                int x=s.top()*2;
                ans+=x;
                s.push(x);
            }
            else if(i=="C"){
                last=s.top();
                ans-=last;
                s.pop();
            }
            else {      
                int x=stoi(i);        
                ans+=x;
                s.push(x);
            }
        }

        return ans;
    }
};