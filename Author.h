#include<iostream>
using namespace std;

class Author {
private:
    string name;
    int birthYear;
public:
    Author() : name("Unknown"), birthYear(1900) {}
    
    explicit Author(string name, int birthYear) : name(name), birthYear(birthYear) {}

    string to_string() const {
        return "Author: " + name + ", Birth Year: " + std::to_string(birthYear);
    }

    string getName() const {
        return name;
    }
    
    int getBirthYear() const {
        return birthYear;
    }
    

    void setName(string name) {
        this->name = name;
    }
    
    void setBirthYear(int birthYear) {
        if (birthYear >= 1900 && birthYear <= 2025) {
            this->birthYear = birthYear;
        } else {
            cerr << "Invalid birth year. It should be between 900 and 2025." << endl;
        }
    }
    
};