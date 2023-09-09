//#include <iostream>
//#include <iomanip>
//
////Example 4: The assignment is to print array of double and int by void* (not the best way)
//
//using namespace std;
//
////========Const===========
//int const SIZE = 8;
//
////=======function=============
//void print(void* array, char type);
//
//int main() {
//
//	int arrayOfInt[] = { 3,6,12,5,5,234,5,-6 };
//
//	double arrayOfDouble[] = { 3.3,6.7,12.8,5.2,5.1,234.2,5.4,-6.9 };
//
//
//	print(arrayOfDouble,'d');
//	cout << endl;
//	print(arrayOfInt,'i');
//
//}
//
//void print(void* array, char type) {
//	
//
//	if (type == 'i') {
//		int* intArray = (int*)(array);
//		for (int i = 0; i < SIZE; i++)
//			cout << intArray[i] << ' ';
//	}
//
//	if (type == 'd') {
//		double* doubleArray = (double*)(array);
//		for (int i = 0; i < SIZE; i++)
//			cout << doubleArray[i] << ' ';
//	}
//}