#include <string>
#include <iostream>

enum{ASK, ANIMAL};

class Tnode {
	public:
		std::string key;
		int type;
		struct Tnode *left;
		struct Tnode *right;

		//Tnode(std::string val, int t);

		virtual	int who() = 0;
		virtual	void set_left() = 0;
//		virtual void set_right() = 0;
	//	virtual void get_left() = 0;
	//	virtual void get_right() = 0;
};

class Ask : public Tnode{
	public:
		virtual	void set_left();
		virtual	int who();
};

int Ask::who()
{
	return ASK;
}

/*
Tnode::Tnode(std::string val, int t)
{
	key = val;
	type = t;
	left = NULL;
	right = NULL;
}
*/


int main()
{
	std::string str;
	str = "qwerty";
	//Tnode tree(str,1);
	Ask a1;
	std::couti << a1.who();
	return 0;
}
