//
//#include <iostream>
//
////Example 1: The assignment is to find the minimum or maximum number from an array without function pointers
//
//using namespace std;
//
////========Const===========
//int const SIZE = 8;
//
//
//int main() {
//
//	int array[] = { 3,6,12,5,5,234,5,-6 },
//		option;
//
//	cin >> option;// 1 or 2
//
//	if (option == 1) {
//		int maximumNumber = array[0];
//		for (int i = 0; i < SIZE; i++) {
//			maximumNumber = max(array[i], maximumNumber);
//		}
//		cout << "The wanted number is: " << maximumNumber;
//
//	}
//	if (option == 2) {
//		int minimumNumber = array[0];
//		for (int i = 0; i < SIZE; i++)
//			minimumNumber = min(array[i], minimumNumber);
//		cout << "The wanted number is: " << minimumNumber;
//
//	}
//}
////============getMaximum=========
//int getMaximum(const int & maximum, const int& num) {
//
//	if (maximum < num) {
//		return num;
//	}
//	return maximum;
//}
//
////============getMinimum=========
//int getMinimum(const int& minimum, const int& num) {
//
//	if (minimum > num) {
//		return num;
//	}
//	return minimum;
//}
