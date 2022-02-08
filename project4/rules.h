/*
 * Rule.h
 *
 *  Created on: Sept 28, 2021
 *      Author: Jaren
 */
#pragma once
#include "predicate.h"

class Rule {
    public:
        void SetHeadPredicate(Predicate head);
        void SetRule(vector<Predicate> Toke);
        string ToString();
        Predicate Head;
        vector<Predicate> RuleList;
};
