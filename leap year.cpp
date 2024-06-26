#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<("enter a year: ");
	cin>>year;
	if((year%400==0))
	{
		cout<<year<<"is a leap year"<<endl;
	}
	else
	{
	    cout<<year<<"is not a leap year"<<endl;
	}
	return 0;
}
