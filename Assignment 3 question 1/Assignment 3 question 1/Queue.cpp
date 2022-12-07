#include "queue.h"
using namespace std;

int main()
{
	queue<int> numbers;
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);
	numbers.push(4);
	numbers.push(5);
	numbers.push(6);
	queue<int> numbers_copy = numbers;
	cout << "Current Queue: ";
	while (!numbers_copy.empty()) {
		cout << numbers_copy.front() << ", ";
		numbers_copy.pop();
	}
	cout << endl;
	numbers_copy = numbers;
	cout << "Testing 'move_to_rear' function" << endl;
	cout << "'move_to_rear' Queue: ";
	move_to_rear(numbers);
	cout << endl;
}