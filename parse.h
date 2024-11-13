
#ifndef PARSE_H
#define PARSE_H

#include <string>

struct Movie {
	std::string episode; 
	short year;
};

namespace StringParse {
	Movie parseStringintoMoviestruct(const std::string& details); 
}

#endif
