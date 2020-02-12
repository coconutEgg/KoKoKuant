#include "kerror.hpp"

int main()
{
    errmsg(STDOUT_FILENO, 12, "test");
}