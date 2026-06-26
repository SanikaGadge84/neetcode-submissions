class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int>freq(26,0);

    int left=0;
    int maxFreq=0;
    int res=0;
    for(int right=0;right<s.size();right++){
        freq[s[right]-'A']++;
        maxFreq=max(maxFreq,freq[s[right]-'A']);
        
        int windowLength=right-left+1;

        while(windowLength-maxFreq>k){
           freq[s[left] - 'A']--;
                left++;

                windowLength = right - left + 1;
        }
        res=max(res,windowLength);

        
    }
    return res;

        
    }
};
