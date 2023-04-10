# Build a "Hello World!" C++ program with CMake and test it with CTest

## Steps to run CMake and CTest locally:

### 1. Create and change directory to build folder
```
mkdir build && cd build
```

### 2. Run CMake
```
cmake ..
```

### 3. Build using CMake
```
cmake --build .
```

### 4. Run CTests
```
ctest
```
## Steps to compile with g++

### 1. Create and change directory to build folder
```
mkdir build && cd build
```

### 2. Create HelloWorld object library
```
g++ -c -o ./HelloWorld.o ./../src/HelloWorld.cpp   
```

### 3. Create main object library
```
g++ -c -o ./main.o ./../src/main.cpp    
```

### 4. Create HelloWorld.exe by linking HelloWorld.o and main.o
```
g++ -o HelloWorld HelloWorld.o main.o -lm
```

## See GitHub Actions workflow at: [CMakeHelloWorld.yml](https://github.com/T-Holmes/cplusplus/blob/main/.github/workflows/CMakeHelloWorld.yml)
