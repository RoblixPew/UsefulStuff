CXX = g++
CXXFLAGS = `wx-config --cxxflags` -std=c++17
LDFLAGS = `wx-config --libs` -mwindows
WINDRES = windres

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
RES_OBJ = resource.o

TARGET = # Inserire nome a piacimento

all: $(TARGET)

resource.rc:
	@echo "Generating resource.rc..."
	@echo '#include "wx/msw/wx.rc"' > resource.rc

$(RES_OBJ): resource.rc
	@echo "Compiling resources..."
	$(WINDRES) -i resource.rc -o $(RES_OBJ) `wx-config --cppflags`

$(TARGET): $(OBJ) $(RES_OBJ)
	@echo "Linking $(TARGET)..."
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c $< $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(RES_OBJ) $(TARGET) resource.rc

.PHONY: all clean
