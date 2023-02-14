//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    vector<int> v(26,0);
	    int ans=0;
	    for(int i=0; i<pat.size(); i++)
	    {
	        v[pat[i]-'a']++;
	    }
	    vector<int> temp(26,0);
	    for(int i=0; i<pat.size(); i++)
	    {
	        temp[txt[i]-'a']++;
	    }
	    if(temp==v)
	    ans++;
	    int j=0;
	    for(int i=pat.size();i<txt.size(); i++)
	    {
	        temp[txt[i]-'a']++;
	        temp[txt[j++]-'a']--;
	        if(v==temp)
	        ans++;
	        
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends