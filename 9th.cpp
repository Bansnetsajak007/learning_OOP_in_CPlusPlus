//a simple login system in C++ using object-oriented programming principles. 
#include <iostream>
#include <string>
#include <map>

class User {
public:
    User(const std::string& username, const std::string& password) : username(username), password(password) {}

    bool authenticate(const std::string& inputPassword) const {
        return inputPassword == password;
    }

private:
    std::string username;
    std::string password;
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
        std::string username, password;

        std::cout << "Welcome to the Login System\n";
        std::cout << "Username: ";
        std::cin >> username;
        std::cout << "Password: ";
        std::cin >> password;

        if (authenticateUser(username, password)) {
            std::cout << "Login successful. Welcome, " << username << "!\n";
        } else {
            std::cout << "Login failed. Invalid username or password.\n";
        }
    }

private:
    std::map<std::string, std::string> users; // Store username-password pairs

    bool authenticateUser(const std::string& username, const std::string& password) {
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
