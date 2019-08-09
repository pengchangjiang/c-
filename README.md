# c-
c++开发dll，开发.so

1.编译dll：g++ -shared -o add.dll add.cpp

2.编译EXE：g++ -L. -o addTest test.cpp add.dll