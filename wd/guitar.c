#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir1 "/usr/local/share/samples/piano/"
#define base1 "bright_"
#define dir2 "/usr/local/share/samples/guitar-electric/"
#define base2 "cleanstrat_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "guitar";
char *PROGRAM_VERSION = "0.01";
int instrument = 0;
int octave = 5;
void intro(void);
void verse1(void);
void verse2(void);
void bridge(void);
int
main()
    {
    // int location1,location2;

    songInit();

    instrument = readScale(dir2,base2);
    openOutput("guitar.rra",0,0);

    setAmplitude(.15);
    setSustain(0.99992);

    #include "song"

    closeOutput();
    return 0;
}


void intro(){
    
    b(1,Q,instrument,octave-1,"-x","--x",SX);
    b(6,I,instrument,octave-1,"x",SX);
    cpower2(1,Q,instrument,octave);
    rest(Hd);
    rest(W);
    cpower2(1,Q,instrument,octave);
    rest(Hd);
    // rest(W);
    rest(Hd);
    rest(I);
    // rest();
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);

    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x-xs",SX);


    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(I);

    b(1,I,instrument,octave-1,"U",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);

    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);

    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);

    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"U",SX);

    b(1,Q,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);

    b(1,Q,instrument,octave-1,"x-xs",SX);



    // b(1,Q,instrument,octave-1,"x-xs",SX);

    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,I,instrument,octave,"xx-b",SX);
    b(5,Q,instrument,octave-1,"B","b",SX);
    b(5,Q,instrument,octave-1,"xx-x",SX);
    b(5,Q,instrument,octave-1,"xx-x","xx-x",SX);
}

void verse1(){
    b(1,Q,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,Q,instrument,octave-1,"x-xs",SX);

    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(I);
    b(1,Q,instrument,octave-1,"u","U",SX);
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);

    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x-xs",SX);


    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(I);

    b(1,I,instrument,octave-1,"U",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);

    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);

    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);

    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"U",SX);

    b(1,Q,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x-Ss",SX);

    b(1,Q,instrument,octave-1,"x-xs",SX);



    // b(1,Q,instrument,octave-1,"x-xs",SX);
    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,I,instrument,octave,"xx-b",SX);
    b(5,Q,instrument,octave-1,"B","b",SX);
    b(5,Q,instrument,octave-1,"xx-x",SX);
    b(5,Q,instrument,octave-1,"xx-x","xx-x",SX);

    }

void verse2(){
    verse1();
}

void bridge(){
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(Q);
    b(1,Q,instrument,octave-1,"u","U",SX);
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"U",SX);

    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(Q);
    
    b(1,I,instrument,octave-1,"U",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);

    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-SS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);

    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);

    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-Ss",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"U",SX);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(Hd);
    b(5,Q,instrument,octave-1,"B","b",SX);
    b(5,Q,instrument,octave-1,"xx-x",SX);
    b(5,Q,instrument,octave-1,"xx-x","xx-x",SX);

}
