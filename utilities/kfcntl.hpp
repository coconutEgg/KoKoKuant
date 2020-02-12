#ifndef _KFCNTL_HPP_
#define _KFCNTL_HPP_

#include <string>
#include <stdio.h>
#include <unistd.h>

#include "kerror.hpp"

#define NOFILENAME ""

static int kopen(const std::string &filename)
{
    int fd = STDOUT_FILENO;

    if (filename != NOFILENAME)
    {
        fd = open(filename.c_str(), O_RDONLY);
        if (fd == -1)
        {
            errmsg(STDOUT_FILENO, errno, "kwrite() calls open() failed");
            exit(1);
        }
    }

    return fd;
}

#endif