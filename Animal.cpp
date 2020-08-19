#include "Tnode.h"
#include "Animal.h"

int Animal::who()
{
	return ANIMAL;
}

void Animal::add(std::string ask, std::string animal)
{
	std::string tmp;
	tmp = key;
	key = ask;
	left = new Animal;
	right = new Animal;


}


