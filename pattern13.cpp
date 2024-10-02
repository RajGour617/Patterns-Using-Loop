#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	for(int i=n;i>=0;i--){
		for(int j=i;j>0;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}
