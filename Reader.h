#include <string>
#include <iostream>
using namespace std;

class Reader {
private:
    string name;
    string memberID;
    int yearJoined;
public:
    Reader() : name("Unknown"), memberID("0000"), yearJoined(2000) {}
    explicit Reader(string name, string memberID, int yearJoined)
        : name(std::move(name)), memberID(std::move(memberID)), yearJoined(yearJoined) {}
        string to_string() const {
        return "Reader: " + name + ", Member ID: " + memberID + ", Year Joined: " + std::to_string(yearJoined);
    }
    string getName() const {
        return name;
    }
    string getMemberID() const {
        return memberID;
    }
    int getYearJoined() const {
        return yearJoined;
    }
    void setName(string name) {
        this->name = std::move(name);
    }
    void setMemberID(string memberID) {
        if (!memberID.empty()) {
            this->memberID = std::move(memberID);
        } else {
            cerr << "Member ID cannot be empty." << endl;
        }
    }
    void setYearJoined(int yearJoined) {
        if (yearJoined >= 1900 && yearJoined <= 2025) {
            this->yearJoined = yearJoined;
        } else {
            cerr << "Invalid year joined. It should be between 1900 and 2025." << endl;
        }
    }
};