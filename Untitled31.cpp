#include <bits/stdc++.h>
using namespace std;
int bs(int a[], int n,int x){
	int l=0,r=n-1,tmp;
	while (l<=r) {
		int m=(l+r)/2;
		if (a[m]==x){
			tmp=m;
			l=m+1;
		}
		else if (a[m]>x){
			r=m-1;
		}
		else {
			l=m+1;
		}
	}
	return tmp;
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int &i:a){
		cin>>i;
	}
	cout<<bs(a,n,x);
	return 0;
}
