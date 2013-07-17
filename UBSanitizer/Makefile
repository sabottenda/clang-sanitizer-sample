
CXX=clang
CFLAGS=-std=c++11

SRCS:=$(wildcard *.cc)
OBJS:=$(subst .cc,,$(SRCS))

example=$(OBJS)
run_example=$(addprefix run_,$(OBJS))

all: $(example)

run: $(example) $(run_example)

run_%: $*
	-./$* > $*_out.txt 2>&1

bool:
	$(CXX) $@.cc -o $@ -fsanitize=bool $(CFLAGS)

align:
	$(CXX) $@.cc -o $@ -fsanitize=alignment $(CFLAGS)

bounds:
	$(CXX) $@.cc -o $@ -fsanitize=bounds $(CFLAGS) -Wno-array-bounds

enum:
	$(CXX) $@.cc -o $@ -fsanitize=enum $(CFLAGS)

clean:
	@rm -f a.out *~
	@rm -f $(example)
	@rm -f $(addsuffix _out.txt, $(example))
