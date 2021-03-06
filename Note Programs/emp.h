/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   emp.h
 * Author: MacBookPro
 *
 * Created on January 15, 2016, 4:01 PM
 */

#ifndef EMP_H
#define EMP_H

#include <string>
#include <iostream>
#include <vector>

//using namespace std; instead of using the whole namespace, it's better practice to declar each member you want to use individually
using std::string; //not a big deal for this class, but you wanna break the habit before big companies look at your code
using std::cout;
using std::endl;
using std::vector;

class Employee{
protected: //Variables that we want to inherit should be protected, not private
    string firstName, lastName;
    short dep;
public:
    Employee(){
		firstName = "foo";
		lastName = "bar";
		dep = 42;
	}
    Employee(string fn,string ln,short d){
		firstName = fn;
		lastName = ln;
		dep = d;
	}
    void print() const{
        cout<<"Name: "<<firstName <<" "<<lastName<<endl
                <<"Dept: "<<dep;
    }
};


class Manager :public Employee{
protected:
    vector<Employee*> group;
    short level;
    
public:
    //Manager();
    Manager(string fn, string ln, short d, short l){
		firstName = fn;
		lastName = ln;
		dep = d;
		level = l;
	}
    void print() const{
        Employee::print();
        cout<<"Level: "<<level;
    }
};



#endif /* EMP_H */

