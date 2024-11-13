
#include <sstream>


struct Movie {
	std::string episode;
	short year;
}; 

namespace StringParse {
	Movie parseStringintoMoviestruct(const std::string& details) {
		Movie movie; 
		std::istringstream iss(details); 

		getline(iss, movie.episode, ',');

		iss >> movie.year;

		return movie; 
	}
}