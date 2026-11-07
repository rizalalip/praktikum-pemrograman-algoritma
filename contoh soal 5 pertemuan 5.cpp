#include <iostream>
using namespace std;
int main() {
	int number;
	cout<<"enter an integer:";
	cin>>number;
	if(number>=0) {
		cout <<"you enterd a positive integer:"<<number<<endl;
	}
	cout<<"this line is always printed.";
	return 0;
}
