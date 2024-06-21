#include <string>
#include <iostream>
using namespace std;

class Course {
public:
    int Id;
    string Name;
    int Price;
    int Started_at;

    Course(int id, string name, int price, int started_at)
       : Id(id), Name(name), Price(price), Started_at(started_at){}

    void Get_Course()
    {
          cout << "Id: " << Id << "Name: " << Name << "Price: " << Price << "Started At: " << Started_at << endl;
    }

};

