#include <iostream>
using namespace std;

bool XetSoNguyento(int so)
{	
	int dem = 0;
	for(int i = 1; i <= so; i++)
	{
		if (so % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	else return false;

}

int main()
{
	int Array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> Array[i];
	}

	cout << "Cac so nguyen to: ";

	for (int i = 0; i < 5; i++)
	{
		if (XetSoNguyento(Array[i]) == true)
		{
			cout << Array[i] << " ";
		}
	}
	

	
}