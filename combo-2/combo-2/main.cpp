#include <string>
//#include <iostream>
//using namespace std;
#include <cstdlib>
#include <sstream>
#include <iostream>
using namespace std;

// Function to produce 20 most likely combinations returned as a vector
int *calculate_top_20(int initial_pattern){
    int top_20_permutations[20];
    int num_elements = sizeof( top_20_permutations ) / sizeof( top_20_permutations[0] );
    for (int index = 0; index < num_elements; index ++ ){
        top_20_permutations[index] = initial_pattern;
        cout << index << " = " << initial_pattern;
        cout << "\n";
    }
    return top_20_permutations;
}



//int main(int argc, char **argv[])
//{
////    int input_integer;
////    cout << "Please enter an integer: ";
////    cin >> input_integer;

//    int *input_integer = argv[1];

//    cout << input_integer;
//    cout << "\n";

//    int *top_20_permutations = calculate_top_20(input_integer);
//    cout << "\n";
//    cout << top_20_permutations[0];
//    return 0;
//}


int main(int argc, char *argv[]){
    istringstream ss(argv[1]);
    int input_integer;
    /// Assigns the input string to an int in memory
    /// and throws an error if error.
    /// https://stackoverflow.com/questions/2797813/how-to-convert-a-command-line-argument-to-int
    if (!(ss >> input_integer)) {
        cerr << "Invalid number: " << argv[1] << '\n';
    } else if (!ss.eof()) {
        cerr << "Trailing characters after number: " << argv[1] << '\n';
    }

    //// saves the input as a char for string manipulations
    ///
    string input_string = argv[1];
    //// Performs a check to ensure that the number is four digits or longer.
    if (!(input_string.size() >= 4)){
        cerr << "The number of characters in the string (" << input_string.size() << ") is too low.\n";
        //void exit (int status);
        exit(0);
    }

    cout << input_integer << " is the input.";
    cout << "\n";
    int *top_20_permutations = calculate_top_20(input_integer);
}
