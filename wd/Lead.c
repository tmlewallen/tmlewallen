#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir1 "/usr/local/share/samples/piano/"
#define base1 "bright_"
#define dir2 "/usr/local/share/samples/guitar-electric/"
#define base2 "strat_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "Lead";
char *PROGRAM_VERSION = "0.01";
int instrument = 0;
int octave = 4;
void intro(void);
void verse1(void);
void verse2(void);
void bridge(void);
int
main()
    {
    // int location1,location2;

    songInit();

    instrument = readScale(dir1,base1);
    openOutput("Lead.rra",0,0);

    setAmplitude(.2);
    setSustain(0.99995);

    #include "song"

    closeOutput();
    return 0;
}


void intro(){
    
    b(1,Q,instrument,octave,"-x","--x",SX);
    b(6,I,instrument,octave,"x",SX);
    b(5,H,instrument,octave,"xsS","xsS","xsS","xsS",SX);
    b(5,H,instrument,octave,"xsS","xsS","xsS","xsS",SX);
    b(5,H,instrument,octave,"xsS","xUS","xuS","xsS",SX);
    b(5,Q,instrument,octave,"usS","SuS",SX);
    b(5,Q,instrument,octave,"xsS",SX);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    ci1(1,I,instrument,octave);
    cchord(1,I,instrument,octave,"x--s");
    cchord(1,I,instrument,octave,"x--s");
    cchord(2,I,instrument,octave,"x--S");
    cchord(2,I,instrument,octave,"x--S");
    cchord(2,I,instrument,octave,"s--u");
    cchord(2,I,instrument,octave,"s--u");
    cchord(3,I,instrument,octave,"x--S");
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(4,H,instrument,octave-1,"--S","--x","---s","---s",SX);
    b(4,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(4,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x",SX);

    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(I);

    b(1,I,instrument,octave-1,"U",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x",SX);
    b(5,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(5,H,instrument,octave-1,"--S","--x","---S","---S",SX);
    b(5,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(5,I,instrument,octave-1,"U",SX);
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(4,H,instrument,octave-1,"--S","--x","--u","--S",SX);
    b(4,H,instrument,octave-1,"--x","-s","U","S",SX);
    b(1,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(1,H,instrument,octave-1,"--S","--x","---s","---s",SX);
    b(1,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(1,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x",SX);
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
    b(1,I,instrument,octave-1,"x",SX);
    b(1,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(1,H,instrument,octave-1,"--S","--x","---s","---s",SX);
    b(1,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(1,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x",SX);
 

    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(I);

    // 5: 1-5-8 "x-xs"
    b(1,Q,instrument,octave-1,"u","U",SX);
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(4,H,instrument,octave-1,"--S","--x","---s","---s",SX);
    b(4,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(4,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x",SX);
    rest(I);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(Q);
    b(1,H,instrument,octave,"xx-b","-","xx-b","xx-b",SX);
    rest(I);

    b(1,I,instrument,octave-1,"U",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x",SX);
    b(5,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(5,H,instrument,octave-1,"--S","--x","---S","---S",SX);
    b(5,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(5,I,instrument,octave-1,"U",SX);
    b(4,Q,instrument,octave-1,"x-xs",SX);
    b(4,I,instrument,octave-1,"x",SX);
    b(4,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(4,H,instrument,octave-1,"--S","--x","--u","--S",SX);
    b(4,H,instrument,octave-1,"--x","-s","U","S",SX);
    b(1,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x-xs",SX);
    b(1,I,instrument,octave-1,"x",SX);
    b(1,H,instrument,octave-1,"u","U","--x","--x",SX);
    b(1,H,instrument,octave-1,"--S","--x","---s","---s",SX);
    b(1,H,instrument,octave-1,"--u","--S","--x","--x",SX);
    b(1,I,instrument,octave-1,"U",SX);
    b(1,Q,instrument,octave-1,"x",SX);
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

    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,I,instrument,octave-1,"x-xS",SX);
    b(5,Q,instrument,octave-1,"x-xS",SX);

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
    rest(H);
    b(1,H,instrument,octave,"xx-b","-","xx-b","-",SX);
    rest(Hd);
    b(5,Q,instrument,octave-1,"B","b",SX);
    b(5,Q,instrument,octave-1,"xx-x",SX);
    b(5,Q,instrument,octave-1,"xx-x","xx-x",SX);


}