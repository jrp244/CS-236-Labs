/*
 * Predicate.h
 *
 *  Created on: Sept 28, 2021
 *      Author: Jaren Petersen
 */


#pragma once
#include "parameter.h"
#include <vector>

class Predicate {
    public:
        void SetName(string theName);
        vector<Parameter> ReturnVector();
        void PushPredicate(Parameter theParameter);
        string ToString();
        string GetName() {
            return Name;
        }
        vector<Parameter> parameterList;
        string Name;
};