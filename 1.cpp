#include <string>
#include <iostream>

class Tnode {
	public:
		std::string key;
		int type;
		struct Tnode *left;
		struct Tnode *right;

		Tnode(std::string val, int t);

		void set_left();
		void set_right();
		void get_left();
		void get_right();
};

Tnode::Tnode(std::string val, int t)
{
	key = val;
	type = t;
	left = NULL;
	right = NULL;
}


int main()
{
	std::string str;
	str = "qwerty";
	Tnode tree(str,1);
	return 0;
}
