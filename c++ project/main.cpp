#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


int main(){
   Person *p = new Person("ali",777);
   p->print();

}
