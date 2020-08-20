#include "Tnode.h"
#include "Ask.h"
#include "Animal.h"

void game(Tnode *tree);

void add_ask(Tnode *node, std::string ask_2, std::string animal_3, int type)
{
	//std::cout << "Function add_ask" << std::endl;
	//std::cout << animal->who() << std::endl;

	std::string ktmp ;

	if(type == LEFT)
	{
		ktmp = node->left->key;
		delete node->left;
	}

	if(type == RIGHT)
	{
		ktmp = node->right->key;
		delete node->right;
	}

	Ask *ntmp = new Ask;
	ntmp->key = ask_2;
	ntmp->right = new Animal;
	ntmp->right->key = ktmp;
	ntmp->left = new Animal;
	ntmp->left->key = animal_3;

	if(type == LEFT)
		node->left = ntmp;

	if(type == RIGHT)
		node->right = ntmp;
}

std::string ans_to_ask(std::string new_ans)
{
	std::string tmp = "Do you ";
	return tmp + new_ans;
}

void game_2(Tnode *tree, Tnode *parent)
{
	char ans;
	std::string new_ask;
	std::string new_ans;
	std::string new_animal;

	if(tree->who() == ANIMAL)
	{
		std::cout << "You " << tree->key << "?" << std::endl;
		std::cin >> ans;

		if(ans == 'y')
			std::cout << "Computer win!" << std::endl;
		if(ans == 'n')
		{
			std::cout << "Who are you?" << std::endl;

			std::cin.clear();
			fflush(stdin);
			std::cin.ignore();
			getline(std::cin, new_animal);

			std::cout << "What is the difference between you and " << tree->key << "?" << std::endl;

			std::cin.clear();
			fflush(stdin);
			std::cin.ignore();
			getline(std::cin, new_ans);

			new_ask = ans_to_ask(new_ans);
			add_ask(parent,new_ask, new_animal, LEFT);

		}
	}

	if(tree->who() == ASK)
		game(tree);
}

void game(Tnode *tree)
{
	char ans;

	std::cout << tree->key << std::endl;
	std::cin >> ans;

	if(ans == 'y')
	    game_2(tree->left, tree);

	if(ans == 'n')
	    game_2(tree->right, tree);
}

void create_tree(Tnode *tree, std::string ask,std::string animal_1,std::string animal_2)
{
	tree->key = ask;
	tree->left = new Animal;
	tree->left->key = animal_1;
	tree->right = new Animal;
	tree->right->key = animal_2;
}

int main()
{
	std::string ask_1;
	std::string ask_2;
	ask_1 = "Do you have крылья?";
	ask_2 = "Do you have полоски?";
	std::string animal_1;
	std::string animal_2;
	std::string animal_3;
	animal_1 = "Ворона";
	animal_2 = "Леопард";
	animal_3 = "Тигр";
	Tnode *tree = new Ask;;
	//tree->create_tree(ask_1, animal_1, animal_2);
	create_tree(tree, ask_1, animal_1, animal_2);
	add_ask(tree,ask_2, animal_3, RIGHT);

	game(tree);

	return 0;
}
