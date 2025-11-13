#include <iostream>

using namespace std;

class Student
{
private:
    int roll;
    string name;
    int m;
    int p;
    int c;

public:
    Student(int, string, int, int, int);
    Student(Student &s);
    int get_roll();
    string get_name();
    inline int get_m();
    int get_p();
    int get_c();
    void set_roll(int);
    void set_name(string);
    void set_m(int);
    void set_p(int);
    void set_c(int);
    int total_marks();
    char grade();

    ~Student();
};

Student ::Student(int r, string n, int m = 0, int p = 0, int c = 0)
{
    roll = r;
    name = n;
    this->m = m;
    this->p = p;
    this->c = c;
}
Student ::Student(Student &s)
{
    roll = s.roll;
    name = s.name;
    m = s.m;
    p = s.p;
    c = s.c;
}

int Student ::get_roll()
{
    return roll;
}
string Student ::get_name()
{
    return name;
}
int Student ::get_m()
{
    return m;
}
int Student ::get_p()
{
    return p;
}
int Student ::get_c()
{
    return c;
}
void Student ::set_roll(int r)
{
    roll = r;
}
void Student ::set_name(string n)
{
    name = n;
}
void Student ::set_m(int m)
{
    this->m = m;
}
void Student ::set_p(int p)
{
    this->p = p;
}
void Student ::set_c(int c)
{
    this->c = c;
}
int Student ::total_marks()
{
    return m + p + c;
}
char Student ::grade()
{
    float percentage = ((float)total_marks() / 300) * 100;
    if (percentage > 60)
        return 'A';
    else if (percentage > 40)
        return 'B';
    else
        return 'C';
}
Student ::~Student()
{
    cout << "\nStudent class destroyed";
}
int main(void)
{
    Student s1(11, "Gary", 100, 100, 95);
    Student s2(s1);
    Student *p;
    p = &s2;
    cout << p->grade();
    return 0;
}
