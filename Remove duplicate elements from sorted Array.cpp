// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here

       stack<int> stk;
       stk.push(a[n-1]);
       for(int i=n-2;i>=0;i--){
           if(a[i]!=stk.top()){
               stk.push(a[i]);
           }
       }
       int count=stk.size();
       for(int i=0;i<count;i++){
           a[i]=stk.top();
           stk.pop();
       }
       return count;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends
