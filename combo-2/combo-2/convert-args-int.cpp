//#include <stdexcept>
//#include <string>

//int main(int argc, char *argv[]){
//    std::string arg = argv[1];
//    try {
//        std::size_t pos;
//        int x = std::stoi(arg, &pos);
//        if (pos < arg.size()) {
//            std::cerr << "Trailing characters after number: " << arg << '\n';
//        }
//    } catch (std::invalid_argument const &ex) {
//        std::cerr << "Invalid number: " << arg << '\n';
//    } catch (std::out_of_range const &ex) {
//        std::cerr << "Number out of range: " << arg << '\n';
//    }
//}
