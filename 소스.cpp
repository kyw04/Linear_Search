#include <iostream>
#define MAX 10
using namespace std;

int linear_search(int list[], int key, int n)
{
	int i = 0;
	while (list[i] != key && i < n) i++;
	return i < n ? i : -1;
}
int main()
{
	int arr[MAX] = { 4, 7, 1, 3, 0, 9, 8, 6, 2, 5 };
	int key;
	cin >> key;

	cout << linear_search(arr, key, MAX);

	return 0;
}