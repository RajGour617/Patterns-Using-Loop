#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	cout<<"Enter how many elements in one row"<<endl;
	cin>>m;
	for(int i=0;i<=n-m;i+=m){
		for(int j=1;j<=m;j++){
			cout<<i+j<<" ";
		}
	cout<<endl;
	}
}
