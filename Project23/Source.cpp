#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*char mystring[] = "string";
	cout << mystring << " has " << sizeof(mystring) << " characters.\n";
	for (int i = 0; i < sizeof(mystring); i++)
		cout << static_cast<int>(mystring[i]) << " \n";
	mystring[1] = 'p';
	cout << mystring;
	char name[255];
	cout << "Enter your name: ";
	cin.getline(name, 255);
	cout << "You entered: " << name << "\n";
	char text[] = "Print this!";
	char dest[50];
	strcpy_s(dest, text);
	cout << dest << "\n";*/

	/*char name[15] = "Dmitrij";
	cout << "My name is " << name << "\n";
	cout << name << strlen(name) << " letters.\n";
	cout << name << " has " << sizeof(name) << " characters in array.\n";*/


	srand(time(NULL));
	char alp[27];
	alp[0] = static_cast<char>(rand() % 26 + 97);
	char buf = 0;
	for (int i = 1; i < 26; i++)
	{
		alp[i] = static_cast<char>(rand() % 26 + 97);
		while (1)
		{
			for (int j = 0; j < i; j++)
				while (alp[i] == alp[j])
				{
					alp[i] = static_cast<char>(rand() % 26 + 97);
					buf = 1;
				}
			if (buf == 1)
			{
				buf = 0;
				for (int j = 0; j < i; j++)
					while (alp[i] == alp[j])
					{
						alp[i] = static_cast<char>(rand() % 26 + 97);
						buf = 1;
					}
			}
			else
				break;
		}
	}
	for(int i = 0; i < 26; i++)
		for(int j = 0; j < 25; j++)
			if (static_cast<int>(alp[j]) > static_cast<int>(alp[j + 1]))
			{
				char t = alp[j];
				alp[j] = alp[j + 1];
				alp[j + 1] = t;
			}
	alp[26] = 0;
	for (int i = 0; i < 27; i++)
		cout << alp[i] << "\n";
	return 0;
}