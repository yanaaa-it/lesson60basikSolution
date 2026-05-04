#include"util.h"
int main() {
	int size;

	cout << "input size of matri: ";
	cin >> size;

	int** matrix = create(size);
	if (matrix == NULL) {
		return -1;
	}

	init_user(matrix, size);

	print("matrix:\n");
	print(convert(matrix, size));

	remove(matrix, size);

	return 0;

}