#include "kerror.hpp"
#include "kfcntl.hpp"

#include <unistd.h>
#include <iostream>
#include <string>

int main()
{
    errmsg(STDOUT_FILENO, 12, "test");

    int fd = kopen("test.cpp");
    char buf[128];

    
    while( read(fd, buf, sizeof(buf)-1) > 0)
    {
        buf[strlen(buf) + 1] = 0;
        std::cout<<buf;
    }
}