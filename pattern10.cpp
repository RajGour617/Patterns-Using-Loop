#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter size:"<<endl;
	cin>>n;
	for(int i=0;i<=n;i+=i){
		for(int j=1;j<=i+1;j++){
			cout<<i+j<<" ";
		}
		cout<<endl;
	}
}
