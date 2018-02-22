#SRCS := $(sort $(wildcard *.cpp))

SRCS := \
    catch_function_01.cpp \
    catch_array_01.cpp \
    catch_array_02.cpp \
    catch_const_pointer_nullptr.cpp \
    catch_function_02.cpp \
    catch_member_data_pointer_01.cpp \
    catch_member_function_pointer_01.cpp \
    catch_member_pointer_nullptr.cpp \
    catch_pointer_nullptr.cpp \
    dynamic_cast3.cpp \
    dynamic_cast5.cpp \
    dynamic_cast_stress.cpp \
    dynamic_cast14.cpp \
    test_fallback_malloc.cpp \
    test_exception_storage.cpp \
    test_aux_runtime.cpp \
    test_guard.cpp \
    test_vector2.cpp \
    test_vector3.cpp \
    unwind_06.cpp

TEST_FAIL_SRCS := \
    catch_class_03.cpp \
    catch_class_04.cpp \
    catch_class_02.cpp \
    catch_class_01.cpp \
    catch_in_noexcept.cpp \
    catch_ptr.cpp \
    catch_pointer_reference.cpp \
    catch_ptr_02.cpp \
    inherited_exception.cpp \
    test_vector1.cpp \
    unwind_01.cpp \
    unwind_02.cpp \
    unwind_03.cpp \
    unwind_04.cpp \
    unwind_05.cpp \
    test_demangle.cpp

EXES := $(SRCS:.cpp=.exe)
LOGS := $(SRCS:.cpp=.log)

TEST_FAIL_EXES := $(TEST_FAIL_SRCS:.cpp=.exe)
TEST_FAIL_LOGS := $(TEST_FAIL_SRCS:.cpp=.log)

OPTIONS := -std=c++0x -stdlib=libc++

.PHONY: all clean test report
all: $(EXES) $(TEST_FAIL_EXES)

clean:
	rm *.exe
	rm *.log

report: $(LOGS)
	@br='===================='; br=$$br$$br$$br;                   \
	ws='[	 ]';                                                   \
	results=`for b in $(LOGS); do echo $$b; done`;                 \
	test -n "$$results" || results=/dev/null;                      \
	all=`  grep "^$$ws*:test-result:"          $$results | wc -l`; \
	pass=` grep "^$$ws*:test-result:$$ws*PASS" $$results | wc -l`; \
	fail=` grep "^$$ws*:test-result:$$ws*FAIL" $$results | wc -l`; \
	if [ $$fail -eq 0 ]; then                                      \
	  success=true;                                                \
	else                                                           \
	  success=false;                                               \
	fi;                                                            \
	echo $$br;                                                     \
	echo "TOTAL:" $$all;                                           \
	echo "PASS: " $$pass;                                          \
	echo "FAIL: " $$fail;                                          \
	echo $$br;                                                     \
	$$success || exit 1;

test:
	@$(MAKE) report; \
	exit $$?;

%.log: %.exe
	@./runtest.sh $< $@


%.exe: %.cpp
	$(CXX) $(OPTIONS) $< -o $@ 
	
