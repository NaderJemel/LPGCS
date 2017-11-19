#include <bits/stdc++.h>
using namespace std;

int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int cost=0;
	for(int i=1;i<=w;i++){
		cost+=k*i;
	}
	int rs=cost-n;
	if(rs>0){
		cout<<rs<<endl;
	}
	else{
		cout<<0<<endl;
	}
}