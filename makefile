CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=
LDFLAGS=
LIBS=-lsfml-graphics -lsfml-window -lsfml-system

OBJS=main.o
TARGET=resources

all: $(TARGET)

.cpp.o:
	$(CXX) $(CPPFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

clean:
	$(RM) $(OBJS) $(TARGET)
