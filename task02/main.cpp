#include "util.h"

int main() {
	int size;

	cout << "Input size of matrix: ";
	cin >> size;

	int** matrix = create(size);

	if (matrix == NULL )
	{
		return -1;
	}

	init_user(matrix, size);

	print("Matris:\n");
	print(convert(matrix, size));

	return 0;
}
