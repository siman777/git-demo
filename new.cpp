#include<bits/stdc++.h>
using namespace std;
//genrate all subsequence

void printSubsequeuece(vector<int> arr,int index,vector<vector<int>> &ans,vector<int> &nums){
    if(index>=arr.size()){
        ans.push_back(nums);
        return;
    }
    nums.push_back(arr[index]);
    printSubsequeuece(arr,index+1,ans,nums);
    nums.pop_back();
    printSubsequeuece(arr,index+1,ans,nums);


}

int main(){
    vector<int> arr={3,1,2};
    vector<int> nums={};
    vector<vector<int>> ans;
    printSubsequeuece(arr,0,ans,nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}