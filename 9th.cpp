//a simple login system in C++ using object-oriented programming principles. 
#include <iostream>
#include <string>
#include <map>
using namespace std;

class User {
public:
    User(const string& username, const string& password) : username(username), password(password) {}

    bool authenticate(const string& inputPassword) const {
        return inputPassword == password;
    }

private:
    string username;
    string password;
};

class LoginDisplay {
public:
    LoginDisplay() {
        // initialize some users 
        users["user1"] = "password1";
        users["user2"] = "password2";
        users["user3"] = "password3";
    }

    void display() {
        string username, password;

        cout << "Welcome to the Login System\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (authenticateUser(username, password)) {
            cout << "Login successful. Welcome, " << username << "!\n";
        } else {



            cout << "Login failed. Invalid username or password.\n";
        }
    }

private:
    map<string, string> users; // Store username-password pairs

    bool authenticateUser(const string& username, const string& password) {
        // check if the username exists and the provided password matches.
        if (users.find(username) != users.end()) {
            User user(username, users[username]);
            return user.authenticate(password);
        }
        return false;
    }
};

int main() {
    LoginDisplay loginDisplay;
    loginDisplay.display();

    return 0;
}
