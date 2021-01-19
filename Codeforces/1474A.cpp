Codeforces Round #696 (Div. 2), problem: (A) Puzzle From the Future

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string b;
		cin>>b;
		string a;
		a+='1';
		b[0]+=1;
		for(int i=1;i<n;i++){
			if(b[i]+1==b[i-1]){
				a+='0';
			}else{
				b[i]+=1;
				a+='1';
			}
		}
		cout<<a<<endl;
	}
}
