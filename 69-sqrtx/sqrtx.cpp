class Solution {
public:

  
long long int binerysearch(int x){
    int s = 0;
    int e = x;
    long long int mid = s + (e-s)/2;

    long long int ans = -1;

    while(s<=e){
         long long int squre = mid*mid;

        if(squre==x){
            return mid;

        }

        if(squre<x){
            ans = mid;

            s = mid + 1 ;
        }else{
            e = mid - 1;

        }
        mid = s +(e-s)/2;

    }
    return ans;

}

    int mySqrt(int x) {
        return binerysearch(x);

    }
};