#include "Tnode.h"
#include "Ask.h"
#include "Animal.h"

//void create_tree(Ask *tree)

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

void game(Ask *tree)
{
	char ans;
	std::string new_ask;
	std::string new_ans;
	std::string new_animal;

	std::cout << tree->key << std::endl;
	std::cin >> ans;
	if(ans == 'y')
	{
		if(tree->left->who() == ANIMAL)
		{
			std::cout << "You " << tree->left->key << "?" << std::endl;
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

				std::cout << "What is the difference between you and " << tree->left->key << "?" << std::endl;

				std::cin.clear();
				fflush(stdin);
				std::cin.ignore();
				getline(std::cin, new_ans);

				new_ask = ans_to_ask(new_ans);
				add_ask(tree,new_ask, new_animal, LEFT);

			}
		}
	}
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
	Ask *tree = new Ask;;
	tree->create_tree(ask_1, animal_1, animal_2);
	add_ask(tree,ask_2, animal_3, RIGHT);

	game(tree);

	return 0;
}
