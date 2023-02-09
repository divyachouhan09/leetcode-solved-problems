//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int N)
    {
        int x=N;
        int cnt=0;
        while(x)
        {
            int k=x&1;
            if(k==0)
            {
                int tp=1<<cnt;
               int ans=N|tp; 
               return ans;
               break;
            }
            x=x>>1;
            cnt++;
        }
        return N;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends