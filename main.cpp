#include "Tnode.h"
#include "Ask.h"
#include "Animal.h"


int main()
{
	std::string ask;
	ask = "ask-1";
	std::string animal;
	animal = "animal-1";
	//Tnode tree(str,1);
	Ask as1;
	Animal an1;

	an1.add(ask, animal);

	std::cout << as1.who() << std::endl;
	std::cout << an1.who() << std::endl;
	return 0;
}
