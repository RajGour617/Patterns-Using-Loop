#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	for(int i=n;i>=0;i--){
		for(int j=0;j<i;j++){
			cout<<char(64+i)<<" ";
		}
		cout<<endl;
	}
}
