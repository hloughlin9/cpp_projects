#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

struct error_storage {
	double error;
	double b0_storage;
	double b1_storage;
	bool operator>(error_storage var1) {
		return error > var1.error;
	}
	bool operator<(error_storage var1) {
		return error < var1.error;
	}
};

int main() {
	double X[] = {1,2,3,4,5};
	double y[] = {1,3,3,2,5};
	std::vector<error_storage>errors;
	double devi;
	double b0 = 0;
	double b1 = 0;
	double learnRate = 0.01;

	for (int i = 0; i < 20; i ++) {
		int index = i % 5;
		double p = b0 + (b1 * X[index]);
		devi = p - y[index];
		b0 = b0 - (learnRate * devi);
		b1 = b1 - (learnRate * devi * y[index]);
		devi = fabs(devi);
		std::cout << "B0 = " << b0 << " " << "B1 = " << b1 << " " << "Error = " << devi << std::endl;
		errors.push_back({ devi, b0, b1 });
	}
	std::sort(errors.begin(), errors.end());
	b0 = errors[0].b0_storage;
	b1 = errors[0].b1_storage;
	std::cout << "Optimal End Values: " << "B0 = " << b0 << " " << "B1 = " << b1 << "Error = " << errors[0].error << "\n";
	double test;
	std::cin >> test;
	double pred = b0 + b1 * test;
	std::cout << "\nValue Predicted = " << pred << std::endl;
}

