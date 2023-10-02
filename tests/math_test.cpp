#include "cppunit.h"
#include "../src/math.h"

class Cppunit_tests: public Cppunit {
    void single_test() {
        CHECKT(math::add(2, 2) == 4);
        CHECKT(math::add(2, 3) == 5);
        CHECKT(math::add(1, -1) == 0);
    }
};

int main(int argc, char *argv[]) {
    // Test invocation example.
    return (new Cppunit_tests)->run();
}