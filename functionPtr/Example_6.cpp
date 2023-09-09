#include <iostream>
#include <iomanip>

//Example 6: "moad A, Second semester, 2019"
//Question: 3

using namespace std;
//========Struct==========
const bool MALE = false,
FEMALE = true;

struct Customer {
    // various members
    bool _sex;
    int _shoe_size;
    int _spent_money;
};

struct Employee {
    // various members
    bool _sex;
    int _salary;
};

struct Node {
    void* _data;
    struct Node* _next = nullptr;
};

////========Const===========
int const SIZE = 8;


//=======function=============
Customer generateRandomCustomer();
Employee generateRandomEmployee();
Node* createNode(void* data);
int sumSalary(void* p, int& counter, bool type);
int sumWasteMoney(void* p, int& counter, bool type);
bool mission(Node* head, int(*func)(void*, int&, bool));
void insertNode(Node*& head, Node* newNode);

int main() {

    // Initialize random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    Node* head_customers = nullptr;
    Node* head_employees = nullptr;

    // Populate the linked lists with random data
    for (int i = 0; i < SIZE; i++) {
        Customer randomCustomer = generateRandomCustomer();
        Node* customerNode = createNode(&randomCustomer);
        insertNode(head_customers, customerNode);

        Employee randomEmployee = generateRandomEmployee();
        Node* employeeNode = createNode(&randomEmployee);
        insertNode(head_employees, employeeNode);
    }


    cout << mission(head_employees, sumSalary) << endl;
    cout << mission(head_customers, sumWasteMoney);
}
//-------------------- mission--------------
bool mission(Node* head, int(*func)(void*, int&, bool)) {

    int menSum = 0,
        womenSum = 0
        , numberOfmen = 1,
        numberOfWomen = 1;

    for (; head != nullptr; head = head->_next) {
        menSum += func(head->_data, numberOfWomen, FEMALE);
        womenSum += func(head->_data, numberOfmen, MALE);
    }

    return (womenSum / numberOfWomen) > (menSum / numberOfmen);
}
//------------sumWasteMoney--------------------
int sumWasteMoney(void* p, int& counter, bool type) {

    Employee* emp = (Employee*)(p);
    if (emp->_sex == type) {
        counter++;
        return emp->_salary;
    }

    return 0;
}
//------------sumSalary--------------------
int sumSalary(void* p, int& counter, bool type) {

    Customer* cus = (Customer*)(p);
    if (cus->_sex == type) {
        counter++;
        return cus->_spent_money;
    }

    return 0;
}

//------------generateRandomCustomer--------------------
Customer generateRandomCustomer() {
    Customer customer;
    customer._sex = rand() % 2 == 0 ? MALE : FEMALE;
    customer._shoe_size = rand() % 10 + 35; // Random shoe size between 35 and 44
    customer._spent_money = rand() % 1000;
    return customer;
}

// Function to generate random employee data
//------------generateRandomEmployee--------------------
Employee generateRandomEmployee() {
    Employee employee;
    employee._sex = rand() % 2 == 0 ? MALE : FEMALE;
    employee._salary = rand() % 50000 + 30000; // Random salary between $30,000 and $79,999
    return employee;
}

// Function to create and initialize a node
//------------createNode--------------------
Node* createNode(void* data) {
    Node* newNode = new Node;
    newNode->_data = data;
    newNode->_next = nullptr;
    return newNode;
}

// Function to insert a node at the beginning of a linked list
void insertNode(Node*& head, Node* newNode) {
    newNode->_next = head;
    head = newNode;
}
