#include <iostream>
#include <string>

/*
sdasdADSASDASD
aasdasdasda
HELlO WORLD!!
ADAsdaSd
aSdASDASdAdaSd
*/

template <class T>
class Anti {
private:
    std::string name = "None";
    T age = 0;
    std::string type = "None";

public:
    Anti(std::string name, T age, std::string type) {
        this->name = name;
        this->age = age;
        this->type = type;

    }

    void get_info() {
        std::cout << "NAME: " << name << "AGE: " << age << "TYPE: " << type << std::endl;

    }
    
    ~Anti() {
        name = "None";
        age = 0;
        type = "None";
        std::cout << "Object DELL!!" << std::endl;
    }

};

int main() {
    Anti<int> shmaaa("Virus", 200, "Danger");
    shmaaa.get_info();

    std::cout << "Description hm hm hm?" << std::endl;
    std::cout << "Shma na green!" << std::endl;
    std::cout << "yes!" << std::endl;

    std::cout << "NEW main commit!!" << std::endl;

    int a;
    std::cin >> a;
    return 0;
}