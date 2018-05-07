
ADD_EXECUTABLE(add add.cpp)  
enable_testing()  
#ADD_TEST(NAME test_add_2_3 COMMAND add 2 3)  
#SET_TESTS_PROPERTIES(test_add_2_3  
#    PROPERTIES PASS_REGULAR_EXPRESSION "5")  
#ADD_TEST(NAME test_add_4_5 COMMAND add 4 5)  
#SET_TESTS_PROPERTIES(test_add_4_5  
#    PROPERTIES PASS_REGULAR_EXPRESSION "9") 

macro(do_test ARG1 ARG2 RESULT) 
ADD_TEST(NAME test_add_${ARG1}_${ARG2} COMMAND add 4 5)  
SET_TESTS_PROPERTIES(test_add_${ARG1}_${ARG2} 
    PROPERTIES PASS_REGULAR_EXPRESSION ${RESULT}) 
endmacro(do_test) 
do_test(2 3 5)
do_test(4 5 9)
