#include <iostream>

class Simulacra
{
public:
	void Main() 
	{
		int city[30][30]
		{
			{2,0,0,2,1,1,1,1,2,2,0,0,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,1,1,1,1,2,2,0,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,1,1,1,1,2,2,0,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,2,2,2,2,2,2,0,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,1,1,2,0,0,0,0,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,1,1,2,0,0,0,0,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,1,1,2,0,0,2,1,1,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,2,2,2,0,0,2,1,1,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,2,2,2,0,0,2,1,1,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
			{2,0,0,2,2,2,2,0,0,2,1,1,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
		};
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 30; j++) {
				if (city[i][j] == 1) {
					std::cout << '#';
				}
				else if (city[i][j] == 2) {
					std::cout << '-';
				}
				else if (city[i][j] == 3) {
					std::cout << ']';
				}
				else if (city[i][j] == 0) {
					std::cout << '|';
				}
				else {
					std::cout << std::endl;
				}
			}
			std::cout << std::endl;
		}
	}
};

