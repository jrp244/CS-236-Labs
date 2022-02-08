/*
 * Parameter.cpp
 *
 *  Created on: Sept 28, 2021
 *      Author: Jaren
 */

#include "parameter.h"

void Parameter::SetParam(string Toke){
    theParameter = Toke;
    return;
}

string Parameter::ToString(){
    return theParameter;
}