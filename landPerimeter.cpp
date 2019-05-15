#include <iostream>
#include <string>
#include <vector>

int landPerimeter(const std::vector< std::string > &map) {
	int perimeter = 0;

	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map[i].length(); j++) {
			if (map[i][j] == 'O') {
				continue;
			}
			if (i == 0) {
				perimeter++;
				//std::cout << "I 0\n";
			} else {
				if (map[i-1][j] == 'O') {
					perimeter++;
					//std::cout << "I not 0\n";
				}
			} 
			if (i == map.size()-1) {
				perimeter++;
				//std::cout << "I last\n";
			} else {
				if (map[i+1][j] == 'O') {
					perimeter++;	
					//std::cout << "I not last\n";
				}
			}
			if (j == 0) {
				perimeter++;
				//std::cout << "J 0\n";
			} else {
				if (map[i][j-1] == 'O') {
					perimeter++;
					//std::cout << "J not 0\n";
				}
			}
			if (j == map[i].length()-1) {
				perimeter++;
				//std::cout << "J last\n";
			} else {
				if (map[i][j+1] == 'O') {
					perimeter++;
					//std::cout << "J not last\n";
				}
			}
			//std::cout << "\n";
		}
	}
	return perimeter;
}

int main() {
	std::vector< std::string > map = {"XOOO",
									 "XOXO",
									 "XOXO",
									 "OOXX",
									 "OOOO"};
	std::cout << landPerimeter(map) << "\n";
	map = {"XOOX"};
	std::cout << landPerimeter(map) << "\n";
	map = {"X", "X", "X", "X"};
	std::cout << landPerimeter(map) << "\n";
}
