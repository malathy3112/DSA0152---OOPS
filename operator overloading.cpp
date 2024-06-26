#include<iostream>
#include<string>
using namespace std;
class kishore{
	private:
		int value;
		string name;
	public:
		kishore(int v, const string&n):value (v), name(n){
		}
		bool operator==(const kishore & other) const{
		return(value==other.value && name==other.name);
		}
};
int main(){
	kishore n1(11,"number1");
	kishore n2(22,"number2");
	kishore n3(11,"number1");
	if(n1==n2){
		cout<<" n1 and n2 are equal\n";
	}
	else{
		cout<<"n1 and n2 are not equal\n";
	}
	if(n1==n3){
		cout<<"n1 and n3 are equal\n";
	}
	else{
		cout<<"n1 and n3 are not equal\n";
	}
	return 0;
}
	
