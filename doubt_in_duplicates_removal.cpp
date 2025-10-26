#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums){
    int n=nums.size();

        int index=1;

        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;

}

int main(){
    vector<int>nums={1,2,2,3,3,4,5};

    int index=solve(nums);

    // cout<<index<<endl;
    int k=nums.size()-index;

    while(k--){
        nums.pop_back();
    }
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";

    }



}