/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: MacBookPro
 *
 * Created on March 1, 2016, 1:48 PM
 */

#ifndef VISITOR_H
#define VISITOR_H

//#include "Directory.h"
class Directory;
class File;
//#include "File.h"

class Visitor{
    
public:
    virtual void VisitFile(File*)=0;
    virtual void VisitDirectory(Directory*)=0;
    
    
    
    
    
};







#endif /* VISITOR_H */

