// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    int length(Node*h){
        int count=1;
        while(h->next!=NULL){
            count++;
            h=h->next;
        }
        return count;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
       int l = length(head);
        int a[l];
        int i=0;
        while(head!=NULL){
            a[i]=head->data;
            head=head->next;
            i++;
        }
        int j=0,k=i-1;
        while(j<=k){
            if(a[j]!=a[k]){
                return 0;
            }
            j++;
            k--;
        }
        return 1;


    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {

        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends
