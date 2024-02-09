// 23k-0077
// Sajid Ali
#include<iostream>
using namespace std;
bool hasSubsetSum(int arr[],int size,int targetSum) 
{
    if(targetSum==0) 
    {
        return true;
    }
    if(size==0 || targetSum<0) 
    {
        return false;
    }
    if(arr[size-1]>targetSum) 
    {
        return hasSubsetSum(arr,size-1,targetSum);
    }
    return hasSubsetSum(arr,size-1,targetSum-arr[size-1]);
}
int main() 
{
    int size,targetSum;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element of array: ";
        cin>>arr[i];
    }
    cout<<"Enter the target sum: ";
    cin>>targetSum;
    if(hasSubsetSum(arr,size,targetSum)) 
    {
        cout<<"Subset with sum "<<targetSum<<" exists.\n";
    } 
    else 
    {
        cout<<"Subset with sum "<<targetSum<<" does not exist.\n";
    }
    return 0;
}
