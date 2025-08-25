STATIC LINKING USING g++ [  compiler that .cpp -> .o (.obj for windows strictly, if using MSVC 'cl' compiler)     ]
                     and ar [   .o -> .a (or .lib if using MSVC 'lib.exe' ) ]

# Step 1: Compile source file to object file
g++ -c custom_library.cpp -o custom_library.o

# Step 2: Create static library from object file
ar rcs libcustom.a custom_library.o

# Step 3: Compile and link main with the static library
g++ main.cpp -L. -lcustom -o main.exe

# Step 4: Run the program
./main.exe
