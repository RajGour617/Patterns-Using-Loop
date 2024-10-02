#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=j;k++){
			
			cout<<j<<" ";
		}
		cout<<"\t";
	}
	cout<<endl;
	}
}
