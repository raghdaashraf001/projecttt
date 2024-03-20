#include <iostream>
#include <string>
using namespace std;
#ifndef PERSON_H
#define PERSON_H


class Person
{
private:
    string name;
    int id;

public:
    Person();
    Person(string name , int id){
    this->name=name;
    this->id=id;
    }
void print(){
cout << "Name = "<<name<<endl;
cout << "ID   = "<<id;

}


};

#endif // PERSON_H
