#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

int main(int argc, char **argv){
	//std::string FileName;
	//std::cin >> FileName;
	std::ifstream infile(argv[1]);
	std::cout<<**argv<<std::endl;
	if( !infile ){
		std::cerr << "Not a valid off file." << std::endl;
		return -1;
	}
	//infile.close();
	std::vector< std::vector<double> >  probability_matrix;
	std::string s;
	while(getline(infile, s)){
		std::stringstream input(s);
		double temp;
		std::vector <double> currentLine;
		while(input >> temp)
			currentLine.push_back(temp);
		probability_matrix.push_back(currentLine);
	}
	infile.close();
	for(int i = 0; i < probability_matrix.size();++i){
		for(int j= 0; j < probability_matrix[i].size();++j)
			std::cout<<probability_matrix[i][j] <<" ";
		std::cout<<std::endl;
	}
}
