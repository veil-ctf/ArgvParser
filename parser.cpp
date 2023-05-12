#include <iostream>
#include "parser.h"
#include <string>
#include <vector>

std::vector<std::string> Parser::parseArgv(int argc, char **argv) {
	std::vector<std::string> inputArgs = {};
	for (int i = 1; i < argc; i++) {
		if (i < argc) {
			inputArgs.push_back(argv[i]);
		}
	}
	return inputArgs; 
}
