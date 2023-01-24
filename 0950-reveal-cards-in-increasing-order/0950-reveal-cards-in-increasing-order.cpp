// class Solution {
// public:
//     vector<int> deckRevealedIncreasing(vector<int>& deck) 
//     {
//         int n=deck.size();
//         deque<int>dq;
//         int flip=0;
//         int chance=0;
//         sort(deck.begin(),deck.end());
//         for(int i=0;i<n;i++) dq.push_back(i);
//         vector<int>ans;
//         while(dq.size()>0)
//      {
//         if(flip==0){
//             ans[dq.front()]=deck[chance++];
//             dq.pop_front();
//         }
//         else{
//             dq.push_back(dq.front());
//             dq.pop_front();
//         }
//         flip^=1;
        
//     }
//     return ans;
//     }
// };



class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {   int n = deck.size(),i=0;
        sort(deck.begin(),deck.end());
        vector<int> ans (n,0);
        queue<int> q;

        while(i<n)
        {
            q.push(i);
            i++;
        }

        for(int i=0;i<n;i++)
        {
            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }

        return ans;


    }
};