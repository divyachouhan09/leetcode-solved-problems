//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long int> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 vector<long long int> v;
                                                 queue<long long int> q;
                                                 for(int i=0; i<k; i++)
                                                 {
                                                     if(arr[i]<0)
                                                     q.push(arr[i]);
                                                 }
                                                 int j=0;
                                                 for(int i=k; i<=n; i++)
                                                 {
                                                     
                                                     
                                                     if(q.empty())
                                                     v.push_back(0);
                                                     else
                                                     v.push_back(q.front());
                                                     
                                                     if(arr[j]==q.front())
                                                     q.pop();
                                                     j++;
                                                     
                                                     if(arr[i]<0)
                                                     q.push(arr[i]);
                                                 }
                                                 return v;
 }