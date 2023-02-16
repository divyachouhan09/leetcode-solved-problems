//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long int k)
    {
        int sum=0,i=0,j=0;
        vector<int> v;
        if(k<=0)
        {
            v.push_back(-1);
            return v;
        }
        while(j<n)
        {
            sum=sum+arr[j];
            if(sum<k)
            {
                j++;
            }
            else if(sum==k)
            {
                
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
                break;
            }
            else if(sum>k)
            {
                while(sum>k)
                {
                    sum=sum-arr[i];
                    i++;
                }
                if(sum==k)
                {
                    
                    v.push_back(i+1);
                    v.push_back(j+1);
                    return v;
                    break;
                }
                j++;
            }
        }
        v.push_back(-1);
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends