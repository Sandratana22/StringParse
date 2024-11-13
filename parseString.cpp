// parseString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "parse.h"

using namespace std; 
using namespace StringParse; 

int main(){
	string details = "24 S2, 2014"; 
	Movie movie = parseStringintoMoviestruct(details); 

	cout << "Episode: " << movie.episode << ", Year: " << movie.year << endl; 

	return 0; 
}
