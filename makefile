# Place the names of all your tracks here (as RRA filenames)

RRAS = SongTest.rra

all : $(RRAS)


# comment out the rplay line if you don't want automatic playing

%.rra   : %.x
		./$<
		rplay $@

%.x     : %.c
		gcc $(LOCAL) -Wall -g -o $@ $< -lsong -lm

play    : $(RRAS)
		rrafastmixer -a0.5 $(RRAS) | rplay

.PHONY : clean

clean :
		-rm -f $(RRAS)