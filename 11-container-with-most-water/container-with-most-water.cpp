class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;

    int size = height.size();
    // cout<<"size"<<size<<endl;

    int left =0;
    int right = size-1;

    while(left<right){
        //widht calculate 
        int w = right -left;

        int h = min(height[left],height[right]);

        int area = w * h;

        maxarea = max(maxarea , area);

        //update the pointer 

        if(height[left]< height[right]){
            left ++;
        }else{
            right--;
        }
        }

        return maxarea;
        
    } 
    
};