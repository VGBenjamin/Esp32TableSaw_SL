#include <sstream>
#include <string>

const char * intToConstChar(int num) {
    static char buf[20];
    snprintf(buf, 20, "%d", num);
    return buf;
}