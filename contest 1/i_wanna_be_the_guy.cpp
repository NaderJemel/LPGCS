#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1]={0};
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int r;
		cin>>r;
		a[r]++;
	}
	cin>>q;
	for(int i=0;i<q;i++){
		int r;
		cin>>r;
		a[r]++;
	}
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			cout<<"Oh, my keyboard!"<<endl;
			exit(0); //stop the program
		}
	}
	cout<<"I become the guy."<<endl;
}