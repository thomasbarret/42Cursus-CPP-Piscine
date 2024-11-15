#include "./Class/ScalarConverter.hpp"


int main(int argc, char **argv) {
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else 
		std::cout << "Usage: " << argv[0] << " [literal]" << std::endl;

    return 0;
}