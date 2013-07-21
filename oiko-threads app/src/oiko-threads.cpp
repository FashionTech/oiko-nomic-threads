/* 
   Oikonomic Threads (c) 2013 Marinos Koutsomichalis, Maria Varela, Afroditi Psara
   installation for algorithmically controlled knitting machine and open data 
*/

#include <iostream>

#include "opencv2/opencv.hpp"

#include "pattern.h"
#include "visualizer.h"
#include "settings.h"

int main( int argc, char** argv ) {

  // preample credits
  std::cout << "\n*****\nOiko-nomic Threads \ninstallation for algorithmically controlled knitting machine and open data \n(c) 2013 Marinos Koutsomichalis, Maria Varela, Afroditi Psara\n*****\n" << std::endl;

  // set speed if provided as parametre
  // 

  Pattern pattern;
  Visualizer *visualizer = new Visualizer;
  
  pattern.setUp();

  for (int i=0; i<10; i++) visualizer->still(pattern, 200);  
  visualizer->clean();
  delete visualizer;

  // export stills
  // for (int i=0; i<5; i++) visualizer->exportStill(pattern, 768);  

  return 0;
}