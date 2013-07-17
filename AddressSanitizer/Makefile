
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

DoubleFree:
	$(CXX) $@.cc -o $@ -fsanitize=address $(CFLAGS)

InvalidFree:
	$(CXX) $@.cc -o $@ -fsanitize=address $(CFLAGS)

OutOfBounds:
	$(CXX) $@.cc -o $@ -fsanitize=address $(CFLAGS)

UseAfterFree:
	$(CXX) $@.cc -o $@ -fsanitize=address $(CFLAGS)

UseAfterReturn:
	$(CXX) $@.cc -o $@ -fsanitize=address-full $(CFLAGS)

UseAfterScope:
	$(CXX) $@.cc -o $@ -fsanitize=address-full $(CFLAGS)

clean:
	@rm -f a.out *~
	@rm -f $(example)
	@rm -f $(addsuffix _out.txt, $(example))
