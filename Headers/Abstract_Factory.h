//
// Created by fatima on 9/23/20.
//

#ifndef DESIGNPATTERNS_ABSTRACT_FACTORY_H
#define DESIGNPATTERNS_ABSTRACT_FACTORY_H

#include <iostream>
using namespace std;

class Abstract_Clothe{
public:
    virtual string sweater();
    virtual string pant();
};
class Concrete_Clothe_1 : public Abstract_Clothe{
public:
    string sweater() override;
    string pant() override;
};

class Abstract_Factory {
public:
    virtual Abstract_Clothe *Clothe_Products();
};

class Concrete_Factory_1 : public Abstract_Factory{
public:
    Abstract_Clothe *Clothe_Products() override;
};

#endif //DESIGNPATTERNS_ABSTRACT_FACTORY_H
