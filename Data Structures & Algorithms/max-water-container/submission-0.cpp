class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxWater=0;
        while(left<right){

            int minHeight=min(heights[left],heights[right]);
            int dist=right-left;
            int area=minHeight*dist;
            maxWater=max(maxWater,area);

            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        } return maxWater;
        
    }
};
