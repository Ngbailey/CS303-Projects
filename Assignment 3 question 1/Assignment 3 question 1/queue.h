#pragma once
#include <queue>
#include <iostream>

using namespace std;

/**		Moves the first integer in the queue to the rear, can be used on any sized queue.
*		@param const int first is just a way to store the first term so that when it is "pop()" from the queue it can be readded.
*		@return returns the inputted queue with the first number at the end of the queue.
*/

void move_to_rear(queue<int> numbers) {
	const int first = numbers.front();
	numbers.pop();
	numbers.push(first);
	while (!numbers.empty()) {
		cout << numbers.front() << ", ";
		numbers.pop();
	}
}