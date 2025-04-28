// Online C++ compiler to run C++ program online
class Solution {
    public:
        int firstUniqChar(string s) {
           //create a map store the frequency of each element 
           unordered_map<char,int>m;
           queue<int>q;
    
           for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                q.push(i);
            }
            m[s[i]]++;//add frequency if element repeating
            while(q.size()>0 && m[s[q.front()]]>1){
                q.pop();
            }
           } 
    return q.empty() ? -1 : q.front();
        }
    };