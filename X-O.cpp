#include <iostream>
using namespace std;

void copy(int old[], int newo[], int l)  // просто копирование
{
	int* p1 = old;
	int* p2 = newo;

	for (int i = 0; i < l; i++) 
	{
		*(p2 + i) = *(p1 + i);
	}
	cout << "Массив, копированный  >>> { ";
	
	for (int i = 0; i < l; i++) 
	{
		cout << p2[i] << ", ";
	}
	cout << "}";
}

void cap(int* arr,int n)
{
	int* par = &arr[n - 1];
	int* par = &arr[0];

	for (int i = 0; i < n / 2; i++)
	{
		*par ^= *par;
		*par ^= *par;
		*par ^= *par;
		par++;
		par--;
	}
	cout << "Массив, измененный  >>> { ";
	for (int i = 0; i < n; i++)
	{
		cout<< arr[i] <<", ";
	}
	cout << "}\n";
}

void cop1y(int old[], int newo[], int l) // копирование в обратном порядке
{
	int* p1 = old;
	int* p2 = newo;

	for (int i = 0; i < l; i++)
	{
		*(p2 + i) = *(p1 + i);
	}
	cout << "Массив в обратном порядке  >>> { ";

	for (int i = l - 1; i >= 0; i--) {
		cout << p2[i] << ", ";
	}
	cout << "}";
} 

void a1() 
{
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* dig = new int[n];
	int* dig1 = new int[n];
	cout << "Массив  >>> { ";
	for (int i = 0; i < n; i++) {
		dig[i] = rand() % 101 - 50;
		cout << dig[i] << ", ";
	}
	cout << "}\n";

	copy(dig, dig1, n); cout << endl;
}

void a2()
{
	setlocale(LC_ALL,"rus");
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* dig = new int[n];
	int* dig1 = new int[n];
	cout << "Массив  >>> { ";
	for (int i = 0; i < n; i++) {
		dig[i] = rand() % 101 - 50;
		cout << dig[i] << ", ";
	}
	cout << "}\n";
	cap(dig, n); cout << endl;
}

void a3()
{
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* dig = new int[n];
	int* dig1 = new int[n];
	cout << "Массив  >>> { ";
	for (int i = 0; i < n; i++) {
		dig[i] = rand() % 101 - 50;
		cout << dig[i] << ", ";
	}
	cout << "}\n";

	cop1y(dig, dig1, n); cout << endl;
}

void main()
{
	setlocale(LC_ALL, "rus");
	int f;
	do {
		cout << "1 - 4 >>> "; cin >> f;
		switch (f)
		{
		case 1:
			a1();
			break;
		case 2:
			a2();
			break;
		case 3:
			a3();
			break;
		}
	} while (f != 0);
}