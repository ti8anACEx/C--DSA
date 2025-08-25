DYNAMIC LINKING USING g++ [  compiler that .cpp -> .o (.obj for windows strictly, if using MSVC 'cl' compiler)     ]
                     and g++ -shared [   .o -> .dll (or .so on Linkux ) along with a minimal import library which is btw static in nature, called libcustom.a (note '.a' will be .lib in MSVC ) ]

# Step 1: Compile DLL and Import Lib
g++ -c custom_library.cpp -o custom_library.o
g++ -shared -o custom_library.dll custom_library.o -Wl,--out-implib,libcustom.a          or use "-Wl,--out-implib,libcustom.a" ie, with quotes if using Powershell

# Step 2: Compile main.cpp and link with libcustom.a
g++ main.cpp -L. -lcustom -o main.exe

# Step 3: Run (ensure DLL is in same folder)
./main.exe
