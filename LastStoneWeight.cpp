class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin() , stones.end());
        
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            cout<<x<<" "<<y<<endl;
            y = x-y;
            if(y!=0){
                pq.push(y);
            }  
        }
        if(!pq.empty()) return pq.top();
        else return 0;
    }
};