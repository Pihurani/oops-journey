#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    int avg;
    Student(){
        name = "unknown";
        age = 0;
        avg = 0;
    }
    Student(string n, int a, int av){
        name = n;
        age = a;
        avg = av;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Averge: " << avg << endl;
    }
};
int main(){
    Student s1("pihu", 18, 98);
    s1.display();
    Student s2;
    s2.display();
    return 0;
}