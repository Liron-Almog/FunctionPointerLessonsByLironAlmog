//#include <iostream>
//#include <iomanip>
//
//// Example 3
////Mo'ed B', Semester B' 2018
//// Question 1
//using namespace std;
//
//
////========Struct==========
//struct Node {
//    int _data;
//    struct Node* _next = nullptr,
//        * _prev = nullptr;
//};
//
////========Const===========
//const int SIZE = 10;
//
////=======function=============
//void createList(Node*& head, Node*& last);
//bool firstPositive(int num);
//bool firstNegative(int num);
//void moveWithPrev(Node*& p);
//void moveWithNext(Node*& p);
//int mission(void(*moveWithPrev)(Node*&), bool(*func)(int), Node* p);
//
//int main() {
//
//    Node* head = nullptr,
//        * last = nullptr;
//
//    createList(head, last);
//    cout << mission(moveWithNext, firstPositive, head) << endl;
//    cout << mission(moveWithPrev, firstNegative, last);
//}
//
//bool firstPositive(int num) {
//    if (num > 0)
//        return true;
//    return false;
//}
//
//bool firstNegative(int num) {
//    if (num < 0)
//        return true;
//    return false;
//}
//
//void moveWithPrev(Node*& p) {
//    p = p->_prev;
//}
//void moveWithNext(Node*& p) {
//    p = p->_next;
//}
//
//int mission(void(*move)(Node*&), bool(*func)(int), Node* p) {
//
//    while (p != nullptr) {
//        if (func(p->_data))
//            return p->_data;
//        move(p);
//    }
//}
//
////==============createList=================
//void createList(Node*& head, Node*& last) {
//
//    int array[] = { 1,4,6,-2,6,2,6,-6,-1,10 };
//    Node* temp;
//
//    for (int i = 0; i < SIZE; i++) {
//        int val = array[i];
//
//        if (head == nullptr) {
//            head = new(std::nothrow) Node;//Needs to check if the allocation succeeded
//            head->_data = val;
//            continue;
//        }
//        else if (last == nullptr) {
//            last = new(std::nothrow) Node;//Needs to check if the allocation succeeded
//            last->_data = val;
//            head->_next = last;
//            last->_prev = head;
//
//        }
//        else {
//            last->_next = new(std::nothrow) Node;//Needs to check if the allocation succeeded
//            last->_next->_data = val;
//            last->_next->_prev = last;
//            last = last->_next;
//        }
//
//
//    }
//
//}
//
