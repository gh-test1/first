
#include <iostream>
#include <string>

int main()
{
	std::string number;

	std::cin >> number;


	int _size = number.size();
	int last_num = (int)number[_size - 1] - 48;
	int pre_last_num = 0;

	if (_size > 1) {
		pre_last_num = (int)number[_size - 2] - 48;
	}

	switch (last_num)
	{
	case 1:
		if (pre_last_num != 1) {
			std::cout << number << " " << "derevo" << std::endl;
			break;
		}
	case 2:
	case 3:
	case 4:
		if (pre_last_num != 1) {
			std::cout << number << " " << "dereva" << std::endl;
			break;
		}
	default:
		std::cout << number << " " << "derev'ev" << std::endl;
		break;
	}
}
