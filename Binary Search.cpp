
#include<bits/stdc++.h>
using namespace std;

int search(vector<int> nums, int high,int low ,int target) 
{
    if(high>=low)
    {
        int mid = low +(high-low)/2;
    
        if(nums[mid]==target)
            return mid;
        if(nums[mid]<=target)
            return search(nums,high,mid+1,target);
        else if(nums[mid]>=target)
            return search(nums,mid-1,low,target);
    }
    else
        return -1;
    
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int target;
    cout<<"enter target";
    cin>>target;
    int result=search(nums,n-1,0,target);
    if(result==-1)
        printf("%d does not exist in nums so return %d",target,result);
    else
        printf("%d exists in nums and its index is %d",target,result);
    return 0;
}