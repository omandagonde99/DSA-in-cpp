class Solution {
public:
    int search(vector<int>& nums, int target) {
        // sort(nums.begin() , nums.end());

        int ans = -1;
        int pivot = 0;
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i]<nums[i-1]){
                pivot = i;
                break;
            }
        }
        //first binary search 
        int low = 0;
        int high = pivot-1;
        // int mid = low + (high-low)/2;

        while(low<=high){ 
           int mid = low + (high-low)/2;
            if(nums[mid]==target){
                return mid;
                // break;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        low = pivot;
        high = nums.size()-1;
        // mid = low + (high-low)/2;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                return mid;
                
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;

    }
};