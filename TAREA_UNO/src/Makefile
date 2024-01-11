CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = adivina.x
SOURCES = main.cpp generarNumeroAleatorio.cpp mostrarPistas.cpp jugar.cpp
HEADERS = functions.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: build run

build: $(TARGET)

run: build
	./$(TARGET) 0 20

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(TARGET) $(OBJECTS)
