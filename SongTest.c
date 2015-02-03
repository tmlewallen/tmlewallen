#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/guitar-electric/"
#define base "strat_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "SongTest";
char *PROGRAM_VERSION = "0.01";

int
main()
    {
        //Add something
    int instrument;
    int octave = 3;
    int marker = 0;

    songInit();

    instrument = readScale(dir,base);

    setKey(E);
    setTempo(175);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.4);

    openOutput("SongTest.rra",0,0);


    // b(1,Q,instrument,octave,"-x","--x",SX);
    // b(6,I,instrument,octave,"x",SX);
    // // ci1(1,W,instrument,octave);
    // b(5,H,instrument,octave,"xsS","xsS","xsS","xsS",SX);
    // b(5,H,instrument,octave,"xsS","xsS","xsS","xsS",SX);
    // b(5,H,instrument,octave,"xsS","xUS","xuS","xsS",SX);
    // b(5,Q,instrument,octave,"usS","SuS",SX);
    // b(5,Q,instrument,octave,"xsS",SX);
    // ci1(1,I,instrument,octave);
    // ci1(1,I,instrument,octave);
    // ci1(1,I,instrument,octave);
    // ci1(1,I,instrument,octave);
    // ci1(1,I,instrument,octave);
    // ci1(1,I,instrument,octave);
    // ci1(1,I,instrument,octave);
    // ci1(1,Qd,instrument,octave);
VERSE:

    // 1: 1-5-8 "x-xs"
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

    if (!marker){
        marker = 1;
        goto VERSE;
    }
    rest(I);

    closeOutput();

    return 0;
    }