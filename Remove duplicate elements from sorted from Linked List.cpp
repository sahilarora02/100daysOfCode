#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}

		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.

Node *removeDuplicates(Node *head)
{
 // your code goes here
 unordered_map<int,int> u;
 Node*temp=head;
 Node*temp2=head;
 Node*back=temp2;
 while(temp!=NULL){
     u[temp->data]++;
     temp=temp->next;
 }

 while(temp2!=NULL){
     if(u[temp2->data]==0){
        back->next = temp2->next;
        Node*a = temp2;
         temp2 = temp2->next;
        delete a;


     }else{

          u[temp2->data]=0;
           back= temp2;
         temp2=temp2->next;

     }
 }

 return head;



}
