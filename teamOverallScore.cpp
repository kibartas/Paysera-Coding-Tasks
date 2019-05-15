#include <iostream>
#include <vector>
#include <string>

// also works with points that are over 9
int calculatePoints(const std::vector<std::string> &results) {
	int sum = 0;
	for (auto result : results) {
		std::string x = "";
		std::string y = "";
		bool ourTeam = true;
		for (int i = 0; i < result.length(); i++) {
			if (result[i] == ':') {
				ourTeam = false;	
				continue;
			}
			if (ourTeam == true) {
				x += result[i];	
			} else {
				y += result[i];
			}
		}
		int ourTeamsPoints = std::stoi(x);
		int theirTeamsPoints = std::stoi(y);
		if (ourTeamsPoints > theirTeamsPoints) {
			sum += 3;
		} else if (ourTeamsPoints == theirTeamsPoints) {
			sum += 1;
		}
	}
	return sum;
}

int main() {
	std::vector< std::string > results = { "3:1", "2:2", "0:1", "3:3", "1:2", "4:2" };
	std::cout << calculatePoints(results) << "\n";
}
