#include <iostream>
#include <string>
#include "Pet.hpp"
using namespace std;

// Default constructor.
Pet::Pet()
    : name("Bob"), age(0), type("Dog"), weight(1000.0) {}

Pet::Pet(string new_name, int new_age, string new_type, double new_weight)
    : name(new_name), age(new_age), type(new_type), weight(new_weight) {}

void Pet::set_name(string new_name){
    name = new_name;
}

string Pet::get_name(){
    return name;
}

void Pet::set_age(int new_age){
    age = new_age;
}
int Pet::get_age(){
    return age;
}

void Pet::set_type(string new_type){
    type = new_type;
}
string Pet::get_type(){
    return type;
}

void Pet::set_weight(double new_weight){
    weight = new_weight;
}
double Pet::get_weight(){
    return weight;
}

 void Pet::pet_info(){
    cout << name << " is a(n) " << type << '\n' <<
        " that is " << age << " year(s) old and weighs " << weight << "lbs" << endl;
}
