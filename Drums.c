#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir1 "/usr/local/share/samples/vocals/"
#define base1 "doo_"


/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "Drums";
char *PROGRAM_VERSION = "0.01";
void intro(void);
void verse(void);

int main(){
	int instrument;
    int octave = 3;

    songInit();

    instrument = readScale(dir1,base1);

    
    setAmplitude(0.4);

    openOutput("Drums.rra",0,0);
    #include "song"

    closeOutput();
    return 0;
}

void intro(){
    rest(Qd);
    int spot = getLocation();
    drumkitCrash (1,1,"x-------",SX); setLocation(spot);
    drumkitKick  (1,1,"x-------",SX); setLocation(spot);
    drumkitSnare (1,1,"x-------",SX); 

    spot = getLocation();
    drumkitCrash (1,1,"--------",SX); setLocation(spot);
    drumkitKick  (1,1,"--------",SX); setLocation(spot);
    drumkitSnare (1,1,"--------",SX);

    spot = getLocation();
    drumkitCrash (1,1,"x-------",SX); setLocation(spot);
    drumkitKick  (1,1,"x-------",SX); setLocation(spot);
    drumkitSnare (1,1,"x-------",SX);


    spot = getLocation();
    drumkitCrash (1,1,"-------X",SX); setLocation(spot);
    drumkitKick  (1,1,"xxxxXXX-",SX); setLocation(spot);
    drumkitSnare (1,1,"xxxxXXXX",SX);

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX);     

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
    drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
    drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
    drumkitKick    (1,1,"xx--x--x",SX); 

    spot = getLocation();
    drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX);

    spot = getLocation();
    drumkitHHOpen  (1,1,"x-x-x-x-",SX); setLocation(spot);
    drumkitCrash   (1,1,"--------",SX); setLocation(spot);
    drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
    drumkitKick    (1,1,"-x--x---",SX);
}


void verse(){
    int i;
    int spot;
    for (i = 0; i < 8; i++){
        spot = getLocation();
        drumkitHHOpen  (1,1,"--x-x-x-",SX); setLocation(spot);
        drumkitCrash   (1,1,"--------",SX); setLocation(spot);
        drumkitSnare   (1,1,"--x---x-",SX); setLocation(spot);
        drumkitKick    (1,1,"-x--x---",SX); 

        spot = getLocation();
        drumkitHHOpen  (1,1,"x-x-x---",SX); setLocation(spot);
        drumkitCrash   (1,1,"-------x",SX); setLocation(spot);
        drumkitSnare   (1,1,"--xx--x-",SX); setLocation(spot);
        drumkitKick    (1,1,"xx--x--x",SX); 
    }
}
