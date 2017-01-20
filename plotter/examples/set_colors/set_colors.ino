/*
  ===========================================================================================
  Example to demonstrate configuring specific colors for each variable 
  -------------------------------------------------------------------------------------------
  Plotter
  v2.0.0
  https://github.com/devinconley/Arduino-Plotter
  by Devin Conley
  ===========================================================================================
*/

#include "Plotter.h"

double x;
double y;

Plotter p;

void setup()
{
    p = Plotter();

    p.AddTimeGraph( "Some title of a graph", 500, "label for x", x, "label for y", y );
    p.AddXYGraph( "Title of X vs Y graph", 1000, "x axis", x, "y axis", y );

    // Set variable colors of graph with index 0 to pink and orange
    p.SetColor( 0, "pink", "orange" );
    p.SetColor( 1, "cyan" );
}

void loop() {
    x = 10*sin( 2.0*PI*( millis() / 5000.0 ) );
    y = 10*cos( 2.0*PI*( millis() / 5000.0 ) );
    
    p.Plot(); // usually called within loop()
}