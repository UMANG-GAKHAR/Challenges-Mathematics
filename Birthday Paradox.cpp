#include<iostream>
using namespace std;
int main() {
	float num=365;
	float den=365;
	int people=0;
	float p;
	cin>>p;
	float x=1.0;
	if(p==1)
	{
		cout<<"366"<<endl;
		return 0;
	}

	while(x>1-p)
	{
		x=x*(num)/den;
		num--;
		people++;
	}
	cout<<people;
	return 0;
}
