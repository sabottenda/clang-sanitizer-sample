
CXX=clang
TSANOPT=-fsanitize=thread
CFLAGS=-std=c++11 -g -O1 $(TSANOPT)

SRCS:=$(wildcard *.cc)
OBJS:=$(subst .cc,,$(SRCS))

example=$(OBJS)
run_example=$(addprefix run_,$(OBJS))

all: $(example)

run: $(example) $(run_example)

run_%: $*
	-./$* > $*_out.txt 2>&1

race_pthread:
	$(CXX) $@.cc -o $@ $(CFLAGS)

race_cpp11:
	$(CXX) $@.cc -o $@ $(CFLAGS) -lstdc++

clean:
	@rm -f a.out *~
	@rm -f $(example)
	@rm -f $(addsuffix _out.txt, $(example))
