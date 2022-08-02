#include <iostream>

using namespace::std;

int main()
{
	cout << "Password: " << endl;

	bool correct_password = false;

	int tries{ 0 };

	char password_entered[]{ "12345" };

	char real_password[]{ "abcde" };

	while (!correct_password)

	{
		cin >> password_entered;

		if (strcmp(password_entered, real_password) == 0)

		{
			correct_password = true;

			cout << "Correct password.\n";

			break;
		}

		else
		{
			tries++;

			cout << "Wrong password. You have " << 5 - tries << " more attempts.\n";


		}

	}


}