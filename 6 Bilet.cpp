#include <iostream>
using namespace std;
int main()
{
	char Letter[] = "Eto prostaya simvolnaya strok";
	char i; // Символ
	int k=0; // Количество этого символа
	cout << Letter << endl;
	cout << "Vvedite symbol : ";
	cin >> i;
	for (int j = 0; Letter[j] != '\0'; j++)
	{
		if (Letter[j] == i) { k++; }
	}

	cout << "Символ " << i << "встречается" << k << "раз";




	return 0;



}