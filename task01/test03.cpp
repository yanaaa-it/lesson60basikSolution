#include< iostream>
using namespace std;
int main() {
	int* ptr = new int;
	int n, m;

	cout << "input size of matrix:";
	cin >> n >> m;

	int** matrix = new int* [n];
	int* sizes = new int[n];

	for (int i = 0; i < n; i++)
	{
		sizes[i] = rand() % m + 2;
		*(matrix + i) = new int[rand() % m + 2];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 100;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[]matrix[i];

	}

	delete[] matrix;

	return 0;
}