# Place the names of all your tracks here (as RRA filenames)

RRAS1 = SongTest.rra
RRAS2 = another.rra

all : $(RRAS)


# comment out the rplay line if you don't want automatic playing

%.rra   : %.x
		./$<
		rplay $@

%.x     : %.c
		gcc $(LOCAL) -Wall -g -o $@ $< -lsong -lm

play    : $(RRAS1)
		rrafastmixer -a0.5 $(RRAS) | rplay

mix		: $(RRAS1) $(RRAS2)
		rrafastmixer -a0.5 $(RRAS1) $(RRAS2) | rplay

.PHONY : clean

clean :
		-rm -f $(RRAS)