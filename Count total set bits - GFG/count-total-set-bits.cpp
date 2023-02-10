//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int cnt=0;
        int i=0;
        int x=n;
        while(x)
        {
            int pow2=1<<i;
            int q=n/pow2;
            int r=n%pow2;
            cnt=cnt+(q/2)*pow2;
            if(q%2!=0)
            {
                cnt=cnt+r+1;
            }
            i++;
            x=x>>1;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends