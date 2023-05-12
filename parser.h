#include <vector>
#include <iostream>

#ifndef PARSER_H
#define PARSER_H

struct Parser {
	public:
		std::vector<std::string> parseArgv(int argc, char **argv);
};

#endif
