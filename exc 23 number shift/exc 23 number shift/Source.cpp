/*write a program by using NESTED loop to output : -
1 2 3 4
2 3 4 5
3 4 5 6
*/
#include <iostream>
void main() {
	int row, column, startNumber;
	std::cout << "inter row, column and start number :"<<std::endl;
	std::cout << "row :"; std::cin >> row;
	std::cout << "column :"; std::cin >> column;
	std::cout << "start number :"; std::cin >> startNumber;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			std::cout << (startNumber + i + j)<<" ";
		}
		std::cout << std::endl;
	}
	std::cin.get();
}