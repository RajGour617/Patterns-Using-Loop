#include<iostream>
using namespace std;

int main(){
	int n;
int	num=2;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			
			cout<<num<<" ";
			num=num+2;
		}
		cout<<endl;
	}
}
