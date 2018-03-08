#include <iostream>
using namespace std;

int main(){

	int numbers[10];
	
	for (int i=0; i<10; i++){
		cout << "Enter number " << i << ": ";
		cin >> numbers[i];
	}
	
	// find average
	int total=0;
	for (int i=0; i<10; i++){
	total = total + numbers[i];
	}
	cout << "Our total is : " << total << endl;
	cout << "Our average is: " << total/10<< endl;
	return 0;
}