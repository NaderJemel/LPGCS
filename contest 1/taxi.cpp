#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5]={0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int f;
		cin>>f;
		a[f]++;
	}
	int rs=0;
	rs+=a[4]+a[3]+(a[2]/2);
	a[1]-=a[3];
	a[2]-=(a[2]/2)*2;
	if(a[2]==1){
		rs++;
		a[1]-=2;
	}
	if(a[1]>0){
		rs+=a[1]/4;
		if(a[1]%4!=0){
			rs++;
		}
	}
	cout<<rs<<endl;
}