//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long long int maximumSumSubarray(int k, vector<int> &nums , int N){
        // code here 
        long long int sum=0;
        for(int i=0; i<k; i++)
        {
            sum=sum+nums[i];
        }
        long long int temp=sum;
        int j=0;
        for(int i=k; i<nums.size(); i++)
        {
            temp=temp+nums[i]-nums[j++];
            
            sum=max(sum, temp);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends