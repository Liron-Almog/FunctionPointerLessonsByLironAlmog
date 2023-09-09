//#include <iostream>
//#include <iomanip>
//
//// Example 2: Using Function Pointers to Perform Calculations
//
//using namespace std;
//
////========Const===========
//const int SIZE = 7;
//
////=======function=============
//double funcOne(const double& num);
//double funcTwo(const double& num);
//double funcThree(const double& num);
//void calculate(double array[], double(*func)(const double&));
//
//int main() {
//
//	double array[] = { 1,2,4,6,7,8,10.10 };
//
//	calculate(array, funcOne);
//	cout << endl;
//	calculate(array, funcTwo);
//	cout << endl;
//	calculate(array, funcThree);
//
//}
//
////=======calculate==========
//void calculate(double array[], double(*func)(const double&)) {
//
//	
//	for (int i = 0; i < SIZE; i++)
//		cout << func(array[i]) << " ";
//
//}
//
////=======funcOne==========
//double funcOne(const double& num) {
//
//	return num;
//
//}
////=======funcTwo==========
//double funcTwo(const double& num) {
//
//	return num *num;
//
//}
//
////=======funcTree==========
//double funcThree(const double& num) {
//
//	return num * num * num;
//
//}