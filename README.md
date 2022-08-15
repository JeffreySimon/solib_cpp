
[1]   .so library
gcc -fPIC -shared test.c -o libtest.so

[2] c program base on .so library
gcc main.c -o m ./libtest.so

g++ main.cpp add_so.cpp -o run
