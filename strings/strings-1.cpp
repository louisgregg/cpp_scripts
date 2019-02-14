#include <string>
#include <iostream>
using namespace std;


int main ()
{
	string input_string;
	cout << "Please enter a string: ";
	cin >> input_string;
	cout << input_string;
	cout << "\n";
	

	// Requires c++11
	//https://stackoverflow.com/questions/9438209/for-every-character-in-string
	for(char &c : input_string){cout << c << "\n";}

	for(string::size_type i=0; i < input_string.size(); ++i)
	{
		cout << i << " = " << input_string[i] << "\n";
	}

	return 0;	
}
