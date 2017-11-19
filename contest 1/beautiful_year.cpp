#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=n+1;i<10000;i++){
		int a,b,c,d,e=i;
		a=e%10;
		e/=10;
		b=e%10;
		e/=10;
		c=e%10;
		e/=10;
		d=e%10;
		e/=10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			cout<<i<<endl;
			break;
		}
	}
}