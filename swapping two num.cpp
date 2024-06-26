#include<iostream>
using namespace std;

int main(){
	int a,b,temp;
	cout<<"enter the number a and b : ";
	cin>>a>>b;
	temp = a;
	a = b;
	b = temp;
	cout<< "after swapping,a = "<< a << "b = "<< b << endl;
	return 0;
}
