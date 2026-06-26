class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
if(s1.length()>s2.length()){
    return false;
}
        for(char c:s1){
            freq1[c-'a']++;
        }
int k=s1.size();
        for(int i=0;i<k;i++){
            freq2[s2[i]-'a']++;
        }
       if(freq1==freq2){
        return true;
       }

       for(int right=k;right<s2.length();right++){
        freq2[s2[right]-'a']++;
        freq2[s2[right-k]-'a']--;

        if(freq1==freq2){
            return true;
        }
       }
       return false;
    }
};
