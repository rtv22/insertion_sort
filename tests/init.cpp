#include <BinaryTree.hpp>
#include <catch.hpp>

SCENARIO(sort,[sort])
{
  int matrix[2][2] = { { 222, 555 },{ 111, 444 }};
	int sorted_matrix[2][2] = { { 111, 222 },{ 444, 555 } };
	int* first = &matrix[0][0];
	int* second = &matrix[1][2];
	insertion_sort(first, second);
	bool check = NULL;
	for (int i = 0; i < 2; i++)
	for (int j = 0; j < 2; j++)
	if (matrix[i][j] == sorted_matrix[i][j])
	check = true;
	REQUARE(check == true)
}
