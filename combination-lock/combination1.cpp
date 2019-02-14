#include <string>
#include <iostream>
using namespace std;

// Function to produce 20 most likely combinations
// returned as a vector
	//int[20] calculate_top_20(int initial_pattern){
	int calculate_top_20(int initial_pattern){
	int[20] top_20_permutations;
	int num_elements = sizeof( top_20_permutations ) / sizeof( top_20_permutations[0] );
	for (int index = 0; index < num_elements; index ++ ){
		top_20_permutations[index] = initial_pattern;
		cout << index << " = " << initial_pattern;
		cout << "\n";
	}
	return top_20_permutations;
}


int main ()
{
	int input_integer;
	cout << "Please enter an integer: ";
	cin >> input_integer;
	cout << input_integer;
	cout << "\n";
	
	//int top_20[20];
	int top_20;
	top_20 = calculate_top_20(input_integer);

	// // Requires c++11
	// //https://stackoverflow.com/questions/9438209/for-every-character-in-string
	// for(char &c : input_integer){cout << c << "\n";}

	// for(string::size_type i=0; i < input_integer.size(); ++i)
	// {
	// 	cout << i << " = " << input_integer[i] << "\n";
	// }

	return 0;	
}