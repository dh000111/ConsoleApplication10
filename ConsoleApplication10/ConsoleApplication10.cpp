 #include <iostream>
using namespace std;

int main()
{
	int arr[7] = { 1, 4, 3, 3, 5, 7, 6 };
	int* front = &arr[0];
	int* back = &arr[6];

	int a = 0;

	for (int i = 0; i <= 2; i++)
	{
		a = *(front + i);
		*(front + i) = *(back - i);
		*(back - i) = a;
	}


	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
}