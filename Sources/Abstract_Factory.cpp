//
// Created by fatima on 9/23/20.
//

#include "../Headers/Abstract_Factory.h"

string Concrete_Clothe_1::sweater() {
    return "Wool sweater";
}

string Concrete_Clothe_1::pant() {
    return "Denim shorts";
}

Abstract_Clothe * Concrete_Factory_1::Clothe_Products(){
    return new Concrete_Clothe_1();
}