#include <iostream>
#include <windows.h>

using namespace std;

class Fraction {
private:
	int* ch, * zn; // числитель и знаменатель
    int size = 5; // размер динамического массива  дробей
public:
	Fraction(); // дефолтный конструктор дробей
	void Print_fraction(); // функция вывода дробей в консоль
	~Fraction(); // деструктор для освобождения памяти
};
int main()
{
	srand(time(NULL));
	Fraction d1;
	d1.Print_fraction();
	system("pause");
}

Fraction::Fraction()
{
	cout << "\t\t<====Constructor worked====>\n";
	ch = new int[size], zn = new int[size];
	for (int i = 0; i < size; ++i)
	{
		ch[i] = rand() % 10;
		zn[i] = rand() % 10;
	}
}


void Fraction::Print_fraction()
{
	for (int i = 0; i < size; ++i)
	{
		cout << "Fraction " << i + 1 << " : " <<
			ch[i] << '/' << zn[i] << endl;
	}
}

Fraction::~Fraction()
{
	cout << "\t\t<====Destructor worked====>\n";
	delete[] ch;
	delete[] zn;
}

