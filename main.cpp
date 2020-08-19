#include "Tnode.h"
#include "Ask.h"
#include "Animal.h"

//void create_tree(Ask *tree)

void add_ask(Tnode *node, std::string ask_2, std::string animal_3)
{
	//std::cout << "Function add_ask" << std::endl;
	//std::cout << animal->who() << std::endl;

	std::string ktmp = node->left->key;
	delete node->left;

	Ask *ntmp = new Ask;
	ntmp->key = ask_2;
	ntmp->right = new Animal;
	ntmp->right->key = ktmp;
	ntmp->left = new Animal;
	ntmp->left->key = animal_3;

	node->left = ntmp;
}

int main()
{
	std::string ask_1;
	std::string ask_2;
	ask_1 = "ask-1";
	ask_2 = "ask-2";
	std::string animal_1;
	std::string animal_2;
	std::string animal_3;
	animal_1 = "animal-1";
	animal_2 = "animal-2";
	animal_3 = "animal-3";
	Ask *tree = new Ask;;
	tree->create_tree(ask_1, animal_1, animal_2);

	add_ask(tree,ask_2, animal_3);

//	create_tree(tree);
	//Ask as1;
	//Animal an1;

	//an1.add(ask, animal);

	//std::cout << as1.who() << std::endl;
	//std::cout << an1.who() << std::endl;
	return 0;
}
