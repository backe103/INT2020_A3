#include <string>
using namespace std;

class Pet {
private:
    string name;
    int age;
    string type;
    double weight;

public:

    Pet(); // default constructor

    Pet(string new_name, int new_age, string new_type, double new_weight);

    void set_name(string new_name);
    string get_name();

    void set_age(int new_age);
    int get_age();

    void set_type(string new_type);
    string get_type();

    void set_weight(double new_weight);
    double get_weight();

    void pet_info();
};
