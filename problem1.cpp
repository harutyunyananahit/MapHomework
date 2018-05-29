#include <iostream>
#include <map>
#include <string>
#include <iterator>


int main()
{
	std::string enter_month;
	std::map <std::string, int> mapOfMonths;
	mapOfMonths["January"] = 31; mapOfMonths["July"] = 31;
	mapOfMonths["February"] = 28; mapOfMonths["August"] = 31;
	mapOfMonths["March"] = 31; mapOfMonths["September"] = 30;
	mapOfMonths["April"] = 30; mapOfMonths["October"] = 31;
	mapOfMonths["May"] = 31; mapOfMonths["November"] = 30;
	mapOfMonths["June"] = 30; mapOfMonths["December"] = 31;
	while(1)
	{
		std::cin >> enter_month;
		if (enter_month == "exit") break;
		if (mapOfMonths.find(enter_month) == mapOfMonths.end())
			std::cout << "unknown month" << std::endl;
		else
		    std::cout << mapOfMonths.find(enter_month)->second << std::endl;
	}

    return 0;
}
