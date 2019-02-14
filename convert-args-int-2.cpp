#include <cstdlib>
#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
istringstream ss(argv[1]);
int x;
if (!(ss >> x)) {
  cout << "Invalid number: " << argv[1] << '\n';
} else if (!ss.eof()) {
  cout << "Trailing characters after number: " << argv[1] << '\n';
}
}