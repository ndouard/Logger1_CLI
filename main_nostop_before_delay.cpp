/*
 * main.cpp
 *
 *  Created on: 21 Jul 2012
 *      Author: thomas
 */

#ifndef MAIN_H_
#define MAIN_H_



#include <locale>
#include <string>
#include <time.h> 
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <iomanip>
#include <iostream>

#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/filesystem.hpp>

#include "Logger.h"

using namespace std ;
int main(int argc, char **argv)
{
    Logger * logger = new Logger();
	
	
	  if ( argc != 5 ) 
    cout<<"usage: "<< argv[0] <<" --duration X --destination '/absolute/path/to/file.klg'\n";
  else {
	int duration = atoi(argv[2]) ;
	string path =  argv[4] ;
	time_t end = time(NULL) + duration;
		
	
	    if(path == "")
        {
            cout<< "Information", "You have not selected an output log file";
			return 0 ;
        }
        else
        {
            logger->startWriting(path);
        }
	
	while(time(NULL) < end)
	{
		
	}
	logger->stopWriting() ;
  }
	
    return 0;
}
#endif /* MAIN_H_ */