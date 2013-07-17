
CXX=clang
# MSANOPT=-fsanitize=memory -fno-omit-frame-pointer 
MSANOPT=-fsanitize=memory -fno-omit-frame-pointer -fsanitize-memory-track-origins 
CFLAGS=-std=c++11 -g -O1 $(MSANOPT)

SRCS:=$(wildcard *.cc)
OBJS:=$(subst .cc,,$(SRCS))

example=$(OBJS)
run_example=$(addprefix run_,$(OBJS))

all: $(example)

run: $(example) $(run_example)

run_%: $*
	-./$* > $*_out.txt 2>&1

UseUninitializedValue:
	$(CXX) $@.cc -o $@ $(CFLAGS)

clean:
	@rm -f a.out *~
	@rm -f $(example)
	@rm -f $(addsuffix _out.txt, $(example))
