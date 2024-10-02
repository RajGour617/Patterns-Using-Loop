#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
