#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,s=1;
	cout<<"nhap n,k: ";
	cin>>n>>k;
	for (int i=n+1;i<=k;i++){
		s=s*i;
	}
	cout<<s;

	return 0;
}
