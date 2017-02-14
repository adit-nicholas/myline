#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int x = x0;
  int y = y0;
	
  int A = abs(y0 - y1);
  int B = abs(x0 - x1) * -1;

  A *= 2;
  B *= 2;

  if ((x1 - x0) < 0){
    if ((y1 - y0) < 0){
    }
  }
  else{
    
    if ((y1 - y0) < 0){
      
      if (B > A){
	int d = (2 * A) -B; 
	while (x < x1){
	  plot(s,c,x,y);
	  if(d < 0){
	    y--;
	    d -= 2 * B;
	  }
	  x++;
	  d += 2 * A;
	}
      }
     
      else{
	d = A - (2 * B);
	while ( y > y1){
	  plot(s,c,x,y);
	  if ( d > 0 ) {
	    
	    x++;
	    d += 2 * A;
	  }
	  y--;
	  d -= 2 * B;
	}
      }
    }
    
    else {

      if (B > A){
	int d = (2 * A) + B;
	
	while( x <= x1 ) {
	  plot(s,c,x,y);
	  if( d > 0 ) { 
	    y++;
	    d += B;
	  }
	  x++;
	  d += A;
	}
      }
      else{  
	int d = A + 2B;
	while( y <= y1 ) {
	  plot(s,c,x,y);
	  if( d < 0 ) { 
	    x++;
	    d += A;
	  }
	  y++;
	  d += B;
	}
      }
      
    }
    
  }
}
