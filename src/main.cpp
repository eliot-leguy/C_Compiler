#include <iostream>
#include <fstream>
#include "token/tokenizer.h"

int main(int argc, char *argv[]){

	if(argc < 2) return -1;

	try{
		std::ifstream inputFile(argv[1]);
		if(!inputFile.is_open()){
			std::cerr << "Error opening the file " << argv[1] << std::endl;
		}
	} catch(...){
		std::cerr << "An error occured." << std::endl;
	}

	return 0;
}
