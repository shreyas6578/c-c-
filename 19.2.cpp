#include <iostream>
using namespace std;

// Forward declaration of the FriendClass
class FriendClass;

// Class: MyClass
class MyClass {
private:
    int privateVar;

public:
    MyClass(int privateVar) : privateVar(privateVar) {}

    // Declare FriendClass as a friend class
    friend class FriendClass;
};

// Friend class: FriendClass
class FriendClass {
public:
    void accessPrivateMember(MyClass& obj) {
        cout << "Private member of MyClass accessed by FriendClass: " << obj.privateVar << endl;
    }
};

int main() {
    MyClass obj(42);
    FriendClass friendObj;

    friendObj.accessPrivateMember(obj);

    return 0;
}
