#include "manager.h"

namespace Mice {
Manager::Manager(std::string name, std::string id, std::string phone, double salary)
             : Person(name, id, phone), _salary{salary}{ }
Manager::Manager(std::istream& ist) {
    // The header must have been stripped from the incoming stream at this point
    getline(ist, _name);
    getline(ist, _id);
    getline(ist, _phone);
    ist >> _salary; ist.ignore();
    
}

void Manager::save(std::ostream& ost) {
    ost << "#" << std::endl << "MANAGER" << std::endl; // header
    ost << _name << std::endl;
    ost << _id << std::endl;
    ost << _phone << std::endl;
    ost << _salary << std::endl;
   
}


//double Manager::pay_Manager() { }

int Manager::salary() {return _salary;}
}
