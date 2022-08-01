#include <iostream>

using namespace::std;

int main()
{
	int test_scores[]{ 56,78,90,83,97 };

	int i{ 0 };

	while (i < 5) {

		if (test_scores[i] % 2 == 0)

			cout << test_scores[i] << endl;

		++i;

	}
}