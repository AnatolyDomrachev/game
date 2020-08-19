#include <string>
#include <iostream>

class Tnode {
	public:
		std::string key;
		int type;
		struct Tnode *left;
		struct Tnode *right;

		Tnode(std::string val, int t);

		virtual	void set_left() = 0;
		virtual void set_right() = 0;
	//	virtual void get_left() = 0;
	//	virtual void get_right() = 0;
};

class question : public Tnode{
	public:
		virtual	void set_left();
};

void question::set_left()
{}


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
	//Tnode tree(str,1);
	return 0;
}
