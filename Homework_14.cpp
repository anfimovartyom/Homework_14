#include <iostream>
#include <string>

int main()
{
	std::string Word = "Skillbox";
	std::cout << Word << "\n";
	std::cout << "Number of characters: " << Word.length() << "\n";

	int i;
	for (i = 0; i < Word.length(); i++)

		if (i == 0)
			std::cout << "The first letter of the word: " << Word[i] << "\n";

		else 
		{
			if (i == Word.length()-1)
			std::cout << "The last letter of the word: " << Word[i] << "\n";
		}

	return 0;
}