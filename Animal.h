#include <string>
#include <iostream>

class Animal : public Tnode{
	public:
//		virtual	void set_left();
		virtual	int who();
		virtual	void add_ask(std::string ask, std::string animal);
};

