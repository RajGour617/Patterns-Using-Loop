#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of pattern"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
	cout<<endl;
	}
}
