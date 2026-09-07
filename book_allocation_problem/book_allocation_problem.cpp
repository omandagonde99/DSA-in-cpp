#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int> arr , int m , int n , int mid){

    int studentcount  =1;
    int pagecount = 0;

    for (int i=0; i<n; i++){
        if(pagecount + arr[i]<=mid){

            pagecount += arr[i];

        }else{
            studentcount++;
            if(studentcount > m || arr[i]>mid){
                return false;
            }
            pagecount = arr[i];

        }

    }

    return true;

}

int allocation(vector<int> arr,int m ,int n){

    int s = 0;
    int sum = 0; 
   

    for (int i=0; i<n; i++){

        sum += arr[i];

    }

    int e = sum;
    int ans = -1;

    int mid = s+(e-s)/2;


    while(s<=e){
        if(ispossible(arr , m , n , mid)){

            ans = mid;
            e = mid -1;

        }else{
            s = mid + 1;

        }
        mid = s+(e-s)/2;

    }
    return ans;

}
int main(){
    vector<int> arr;  

    int n = 4;
    int m = 2;


    arr.push_back(10);      // Add 10 at end
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    cout<<allocation( arr,  m,  n);


    return  0;


    
}
