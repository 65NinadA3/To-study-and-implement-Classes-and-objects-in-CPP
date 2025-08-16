#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
    int rollNumber; 
};
int main() {
    Student s1;
    s1.name = "Ninad Phatak";
    s1.branch = "ENTC";
    s1.subject = "C++";
    s1.year = "2";
    s1.result = 9.77;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"Subject: "<<s1.subject<<endl;
    cout<<"Year: "<<s1.year<<endl;
    cout<<"Result: "<<s1.result<<endl;
    return 0;
}
