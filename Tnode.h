#include <string>
#include <iostream>

enum{ASK, ANIMAL};
enum{LEFT, RIGHT};

class Tnode {
	public:
		std::string key;
		int type;
		struct Tnode *left;
		struct Tnode *right;

		//Tnode(std::string val, int t);

		virtual	int who() {return -1;}
		virtual	void add_ask(std::string ask, std::string animal){}
//		virtual	void set_left() = 0;
//		virtual void set_right() = 0;
	//	virtual void get_left() = 0;
	//	virtual void get_right() = 0;
};


