//
// Created by fatima on 9/23/20.
//

#include "../Headers/Singleton.h"

Singleton* Singleton::onlySingleton= nullptr;

Singleton * Singleton::get_Age_Instance(int newValue){
    if(onlySingleton== nullptr){
        onlySingleton= new Singleton(newValue);
    }
    return onlySingleton;
}
void Singleton::changeAge(int newValue){
    *this->_agePtr=newValue;
}
int Singleton::getAge(){
    return this->_age;
}