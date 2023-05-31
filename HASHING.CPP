// #include <bits/stdc++.h>
// using namespace std;


// number hashing

// int main() {
// 	// your code goes here
	
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for (int i= 0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	// pre compute 
// 	map<int ,int> mpp;
// 	for (int i= 0;i<n;i++){
// 		mpp[arr[i]]++;
// 	}
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int number;
// 		cin>>number;
// 		cout<<number<<" "<<mpp[number]<<endl;
// 	}
	
// 	return 0;
// }



// charecter hasing

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin>>s;
	
	int hash[256] = {100000};
	for(int i=0;i<s.size();i++){
		hash[s[i]]++;
	}
	int q;
	cin>>q;
	while(q--){
	char c;
	cin>>c;
	cout<<c<<" "<<hash[c]<<endl;
	}
	
	
	
	
return 0;
}