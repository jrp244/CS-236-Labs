/*
 * Relation.h
 *
 *  Created on: October 24, 2021
 *      Author: Jaren Petersen
	A relation has a name, a header, and a set of tuples
	Write classes that implement a simple relational database. Your design must include at least the following classes: Database, Relation, Header, and Tuple. Provide functions in the Relation class for each of the relational operations (select, project, and rename). Each of these functions operates on an existing relation and returns a new Relation (the result of the operation).

	The Relation class must use a set data type to hold the tuples in the relation.
 */
#pragma once
#include "scheme.h"
#include "tuple.h"
#include <set>


class Relation {
public:
    Relation() {}

    Relation Select(int index, string value);
    Relation Select(int indexOne, int indexTwo);
    Relation Project(vector<int> indicies);
    Relation Rename(vector<string> names);

//==========================================Code Added in Lab 4===================================================//
    Relation Join(Relation relationToJoin);
    bool Unite(Relation toUnite);
    bool isJoinable(Tuple Tuple1, Tuple Tuple2Add, Scheme Scheme1, Scheme Scheme2Add);
//==========================================Code Added in Lab 4===================================================//

    void AddTuple(Tuple tuples); 
    void SetScheme(Scheme DemSchemes);
    void SetName(string DatName);

    Scheme GetScheme() {
        return TheScheme;
    }
    set<Tuple> GetTuple() {
        return DemTuples;
    }
    int GetTupleSize() {
        return DemTuples.size();
    }

    void ToString();
    set<Tuple> DemTuples;
    string name;
    Scheme TheScheme;
    bool BeenOutPutted;
};