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

char *PROGRAM_NAME = "piano";
char *PROGRAM_VERSION = "0.01";
int instrument = 0;
int octave = 6;
void intro(void);
void verse1(void);
void verse2(void);
void bridge(void);
void outro(void);

int
main()
    {
    // int location1,location2;

    songInit();

    instrument = readScale(dir1,base1);
    openOutput("piano.rra",0,0);

    setAmplitude(.15);

    #include "song"

    closeOutput();
    return 0;
}

void intro(){
	rest(Qd);
	int i;
	for (i=0 ; i < 15; i++)
		rest(W);
    rest(Hd);
    rest(I);
}

void verse1(){
    rest(I);
	int i;
    for (i=0 ; i < 15; i++)
        rest(W);
    rest(Hd);
    rest(I);
}

void verse2(){
	int i;
    cpower(1,I,instrument,octave);
	for (i = 0; i < 8; i++){
		cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);  
    }
    for (i = 0; i < 3; i++){
        cpower(5,I,instrument,octave-1);
        cpower(5,I,instrument,octave-1);
        cpower(5,I,instrument,octave-1);
        cpower(5,I,instrument,octave-1);
    }
        cpower(5,I,instrument,octave-1);
        cpower(5,I,instrument,octave-1);
        cpower(5,I,instrument,octave-1);
        cpower(4,Q,instrument,octave-1);
        cpower(4,I,instrument,octave-1);
    for (i = 0; i < 3; i++){
        cpower(4,I,instrument,octave-1);
        cpower(4,I,instrument,octave-1);
        cpower(4,I,instrument,octave-1);
        cpower(4,I,instrument,octave-1);    
    }
        cpower(4,I,instrument,octave-1);
        cpower(1,Q,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
    for (i = 0; i < 5; i++){
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
        cpower(1,I,instrument,octave);
    }
    cpower(1,I,instrument,octave);
    cpower(1,I,instrument,octave);
    cpower(1,Q,instrument,octave);
    cpower(5,Q,instrument,octave-1);
    cpower(5,I,instrument,octave-1);
    cpower(5,I,instrument,octave-1);
}

void bridge(){
    verse1();
}

void outro(){
    rest(Qd);
    rest(Wd);
    // cchord(8,Q,instrument,octave,"x--s");

}