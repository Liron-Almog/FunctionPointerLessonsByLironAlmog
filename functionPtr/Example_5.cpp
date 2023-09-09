//#include <iostream>
//#include <iomanip>
//
////Example 5: The assignment is to print array of double and int by void*
//
//using namespace std;
//
////========Const===========
//int const SIZE = 8;
//
////=======function=============
//void print(void* array, void(*printItme)(void*, int));
//void printDouble(void* array, int place);
//void printInt(void* array, int place);
//
//int main() {
//
//	int arrayOfInt[] = { 3,6,12,5,5,234,5,-6 };
//
//	double arrayOfDouble[] = { 3.3,6.7,12.8,5.2,5.1,234.2,5.4,-6.9 };
//
//
//	print(arrayOfDouble, printDouble);
//	cout << endl;
//	print(arrayOfInt, printInt);
//
//
//}
////===========print================
//void print(void* array, void(*printItme)(void*, int)) {
//
//	for (int i = 0; i < SIZE; i++)
//		printItme(array, i);
//
//}
//
//void printDouble(void* array, int place) {
//
//	double* doubleArray = (double*)array;
//	cout << doubleArray[place] << ' ';
//
//}
//
//
//void printInt(void* array, int place) {
//
//	int* intArray = (int*)array;
//	cout << intArray[place] << ' ';
//}
//
