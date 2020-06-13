#include <iostream>
using namespace std;

const int field_x = 30;
const int field_y = 20;

void draw()
{
	for (int i = 0; i < field_x + 2; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < field_y + 2; i++)
	{
		cout << "#";
		for (int j = 0; j < field_x; j++)
			cout << " ";
		cout << "#" << endl;
	}

	for (int i = 0; i < field_x + 2; i++)
		cout << "#";
	cout << endl;
}

void main() 
{
	draw();
	system("pause");
}