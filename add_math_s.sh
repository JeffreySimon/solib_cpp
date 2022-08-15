g++ -fPIC -shared -fvisibility=hidden src/math_s.cpp src/add.cpp -o lib/libmath_s.so
# g++ -fPIC -shared src/math_s.cpp ./lib/libadd.so -o lib/libmath_s.so
