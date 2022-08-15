This is a test of two .so  files have same function parameters,exceptionally math.cpp including add.cpp
/*-----------[1]------------------so in so -----------------*/
 $ add.sh
            -> out libadd.so
 $ add_math.sh
            -> out libmath.so    which need libadd.so
/*----------[2]-------------------.cpp in so -----so adhere to cpp----------*/
 $ add_math_s
            -> out libmath_s.so
/*---------[3]---------------------main-------------------------------*/
 $ main.sh
            -> out run_l
