#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    int avg;

};
int main(){
    Student s1;
    s1.name = "pihu";
    s1.age = 18;
    s1.avg = 98;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Average: " << s1.avg << endl;

    return 0;
}