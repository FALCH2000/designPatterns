//
// Created by fatima on 9/23/20.
//

#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H


class Singleton {

protected:
    Singleton(int myAge);
    static Singleton* onlySingleton;
    int _age;
    int *_agePtr= &_age;

public:
    static Singleton *get_Age_Instance(int newValue);
    void changeAge(int newValue);
    int getAge();

};


#endif //DESIGNPATTERNS_SINGLETON_H
