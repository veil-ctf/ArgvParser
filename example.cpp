#include <iostream>
#include "parser.h"

int main(int argc, char **argv) {
	Parser parser;
	std::vector<std::string> userArgs = parser.parseArgv(argc, argv);
	for (const auto& arg : userArgs) {
		if (arg == "--help") {
			std::cout << "Usage: " << argv[0] << " [OPTIONS].. [VALUE]\n"
				<< "--version\tShow version\n"
				<< "Examples: " << argv[0] << " --version\n";
			exit(0);
		}
		if (arg == "--version") {
			std::cout << "Parser Version 1.0" << std::endl;
			exit(0);
		} else {
			std::cout << "Invalid argument: " << argv[1] << std::endl;
			exit(0);
		}
	}
	return 0;
}
