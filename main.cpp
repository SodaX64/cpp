#include "main.hpp"

int main()
{
	text *a = new text;
	a->print("hello");
	delete a;
	cin.get();
	cout << "goodbye!" << endl;
	return 0;
}
