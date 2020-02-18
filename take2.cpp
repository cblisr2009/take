//
//  take2.cpp
//  
//
//  Created by Cortney Bramlett on 2/13/20.


#include "take2.hpp"
#include "tinyxml2.h"
#include <iostream>

using namespace tinyxml2;
using namespace std;

int main(int argc, const char ** argv)
{
    XMLDocument doc;
    doc.LoadFile("/Users/cortneybramlett/Downloads/NAD_r3_revised_ASCII/NAD_FGDC_DOT.xml");
    
    //to check that the file loaded correctly
    if(doc.ErrorID() == 0)
    {
        //to create a root node to hold all single elements of the doc
        XMLNode * pRoot = doc.NewElement("Root");
        
        //to attach the element to the xmldoc
        doc.InsertFirstChild(pRoot);
       if( NULL != pRoot )
       {
       //create another element
        XMLElement * pStatesElement = pRoot->FirstChildElement("States");
           
        if( NULL != "States" )
        {
            XMLElement * pStateElement = pStatesElement->FirstChildElement("State");
            while( pStateElement )
            {
                XMLElement *pCitiesElement = pStateElement->FirstChildElement
                ("Cities");
                
                if( NULL != pCitiesElement )
                {
                    cout << pCitiesElement->GetText();
                }
                XMLElement *pCityElement = pCitiesElement->FirstChildElement("City");
                
                if( NULL != pCityElement )
                {
                    cout << " " << pCityElement->GetText();
                }
                cout << std::endl;
                
                pStateElement = pStateElement->NextSiblingElement( "State");
            }
        }
    }
        return 0;
}
}
