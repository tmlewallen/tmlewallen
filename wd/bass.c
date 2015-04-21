#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/bass/"
#define base "epiphone_1_"
#define dir1 "/usr/local/share/samples/bass-acoustic/"
#define base1 "adrian-pluck_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "bass";
char *PROGRAM_VERSION = "0.01";
int instrument = 0;
int octave = 2;
void intro(void);
void verse1(void);
void verse2(void);
void bridge(void);
int
main()
    {
    // int location1,location2;

    songInit();

    instrument = readScale(dir,base);
    openOutput("bass.rra",0,0);

    setAmplitude(.3);
    setSustain(0.9999);

    #include "song"

    closeOutput();
    return 0;
}

void intro(){
	rest(Qd);
	b(1,Q,instrument,octave,"x", SX);
	rest(Hd);
	rest(W);
	b(1,Q,instrument,octave,"x", SX);
	rest(Hd);
	cchord(1,I,instrument,octave,"x");
    cchord(1,I,instrument,octave,"x");
    cchord(2,I,instrument,octave,"x");
    cchord(2,I,instrument,octave,"x");
    cchord(2,I,instrument,octave,"s");
    cchord(2,I,instrument,octave,"s");
    cchord(3,I,instrument,octave,"x");

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);

  	b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);


    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);


    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);

  	b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);


    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);

}

void verse1(){
	b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);

    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    
    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);

    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,Q,instrument,octave-1,"x",SX);


	b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,I,instrument,octave-1,"x",SX);
    b(4,Q,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);

  	b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);


    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);

  	b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);

    b(4,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);

    b(5,Q,instrument,octave-1,"x",SX);

}

void verse2(){
	verse1();
}

void bridge(){
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,I,instrument,octave-1,"x",SX);

    b(3,I,instrument,octave-1,"x",SX);
    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave,"x",SX);
    b(4,I,instrument,octave,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave,"x",SX);
    b(4,I,instrument,octave,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave,"x",SX);
    b(4,I,instrument,octave,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(3,I,instrument,octave-1,"b",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);

    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,I,instrument,octave-1,"x",SX);

    b(4,I,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x",SX);
    b(5,I,instrument,octave-1,"x",SX);
    b(5,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(5,H,instrument,octave-1,"--S","--x","---S","---S",SX);
    b(5,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(5,I,instrument,octave-1,"U",SX);
    b(4,Q,instrument,octave-1,"x",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(4,H,instrument,octave-1,"--S","--x","--u","--S",SX);
    b(4,H,instrument,octave-1,"--x","-s","U","S",SX);
    b(1,I,instrument,octave-1,"U",SX);
    
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);
    
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);
    
    b(1,Q,instrument,octave-1,"x",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(7,Q,instrument,octave-1,"b",SX);
    b(7,I,instrument,octave-1,"b",SX);
    b(8,Q,instrument,octave-1,"x",SX);
    b(8,I,instrument,octave-1,"x",SX);
    rest(I);
    b(5,Q,instrument,octave-1,"B","b",SX);
    b(5,Q,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x","x",SX);

}



