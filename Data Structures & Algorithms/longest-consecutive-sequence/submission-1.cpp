class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st(nums.begin(),nums.end());

int longest=0;
       for(int num:st){
        if(st.find(num-1)==0){
            int length=1;
            int curr=num;
        

    while(st.count(curr+1)){
        
        curr++;
        length++;
    }
    longest=max(longest,length);
        }
       }
       return longest;
    }
};
