
#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;

	cout << reverseWord(s) << endl;
	}
	return 0;

}

// } Driver Code Ends


//User function Template for C++
#include<string.h>
string reverseWord(string str){
int l=0;
for(int i=0;str[i]!='\0';i++){
    l++;
}
  //Your code
  char c;
  int j=l-1;
  for(int i=0;i<=j;i++){
      c=str[i];
      str[i]=str[j];
      str[j]=c;
      j--;
  }
  return str;
}
