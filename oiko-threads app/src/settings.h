/*
  Coded by Marinos Koutsomichalis for the Oikonomic Threads projects.
  Oikonomic Threads (c) 2013 Marinos Koutsomichalis, Maria Varela, Afroditi Psarra. 
  Installation for algorithmically controlled knitting machine and open data
*/

// global settings

#pragma once

#include <iostream>
#include <string>
#include <libproc.h>
#include <mach-o/dyld.h>

#include "mar_utils.h"

// select mode
#define demo_mode 1 // for emulation only
#define osc_mode 1 // to send strings over serial to the second computer ** set the address, etc on the cpp file

const std::string getAbsolutePath();
const std::string appendPath(std::string, const std::string&);

namespace settings {
  // osc related
  extern const std::string oscPath;
  extern const int oscPort;
  // global settings 
  extern const unsigned int width; // line width 
  extern const unsigned int speed; // speed in seconds
  extern const std::string filename;  // the filename to use
  // selected patterns
  extern const std::string pattern0;
  extern const std::string pattern1;
  extern const std::string pattern2;
  extern const std::string pattern3;
  extern const std::string pattern4;
  extern const std::string pattern5;
  extern const std::string pattern6;
  extern const std::string pattern7;
  extern const std::string pattern8;
  extern const std::string pattern9;
}
