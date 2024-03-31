#define CASE_A   0
#define CASE_B   1
#define CASE_C   2

#define CASE CASE_C

#define today __DATE__

#define i int
#define ll long long


#if today == "26 March 2024"

#endif

#if __FILE__ == "/main.cpp"
    #include "iostream"



#if   CASE == CASE_A
  #include "case_a.h"
#elif CASE == CASE_B
  #include "case_b.h"
#elif CASE == CASE_C
  #include "case_c.h" // this will include, 
#endif