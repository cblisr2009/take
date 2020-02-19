//
//  take2.cpp
//  
//
//  Created by Cortney Bramlett on 2/13/20.
//

#include "take2.hpp"
#include "tinyxml2.h"
#include <iostream>

using namespace tinyxml2;
using namespace std;

int main(int argc, const char ** argv)
{
    XMLDocument *doc = new XMLDocument();
    doc->LoadFile("constitution.xml");
    
    //to check that the file loaded correctly
    if(doc->ErrorID() == 0)
    {
        cout<< doc->FirstChildElement()->FirstChildElement()->GetText()<<endl;
        
//        doc->FirstChildElement()->FirstChildElement()->FirstChildElement()->FirstChildElement()->FirstChildElement()->NextSiblingElement()->GetText()<<endl;

    }
//    doc->Print();


    return 0;
}

