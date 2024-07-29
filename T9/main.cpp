#include "T9.h"
using namespace std;

int main()
{
	TrieNode* library = new TrieNode{};
	insert(library, "apple");
	insert(library, "upload");
	insert(library, "bible");
	insert(library, "atom");
	insert(library, "brand");
	insert(library, "bread");
	insert(library, "understand");
	insert(library, "windetta");
	insert(library, "world");
	string words[9];

	string out = "";
	while (true)
	{
		system("cls");
		cout << "Current string is:\n" << out << endl;
		cout << "Enter the first letters of the word, or 0 to exit:\n";
		string temp = "";
		cin >> temp;
		if (temp == "0")
			break;
		tNine(library, temp, out);
	}

	delete library;
	return 0;
}