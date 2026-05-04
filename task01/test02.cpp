//#include< iostream>
//using namespace std;
//int main() {
//	int* ptr = new int;
//	int n, m;
//
//	cout << "input size of matrix:";
//	cin >> n >> m;
//
//	int** matrix = new int* [n];
//
//	for (int i = 0; i < n; i++)
//	{
//		*(matrix + i) = new int[m];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			cout << *(*(matrix + i) + j) << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		delete[](*(matrix - i));
//
//	}
//
//	delete[] matrix;
//
//	return 0;
//}