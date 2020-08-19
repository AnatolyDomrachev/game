#include "Tnode.h"
#include "Ask.h"
#include "Animal.h"

int Ask::who()
{
	return ASK;
}

void Ask::create_tree(std::string ask,std::string animal_1,std::string animal_2)
{
	key = ask;
	left = new Animal;
	left->key = animal_1;
	right = new Animal;
	right->key = animal_2;
}

