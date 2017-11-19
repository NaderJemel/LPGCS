#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int h,t=7;
	for(int i=0;i<(int)s.size()-6;i++){
		h=0;
		for(int j=i;j<t;j++){
			h+=s[j]-'0';
		}
		t++;
		if(h==0 || h==7){
			cout<<"YES"<<endl;
			exit(0); //close program
		}
	}
	cout<<"NO"<<endl;
}
