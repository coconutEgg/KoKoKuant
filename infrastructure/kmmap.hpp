#ifndef _KMMAP_HPP_
#define _KMMAP_HPP_

#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>

#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "kerror.hpp"

#define NOFILENAME ""

class Kmmap
{

public:
    Kmmap(const std::string &str)
        : filename(str){};

    void kread(std::string filename = NOFILENAME)
    {
        

    }

    void kwrite(std::string filename = NOFILENAME)
    {
        int fd = STDOUT_FILENO;

        if (filename != NOFILENAME)
        {
            fd = open(filename.c_str(), O_RDONLY);
            if(fd == -1)
            {
                errmsg(STDOUT_FILENO, errno, "kwrite() calls open() failed");
                exit(1);
            }
        }


    }

    inline void reset_filename(const std::string &str)
    {
        filename = str;
    }

private:
    std::string filename;
    char *pdata;
};

#endif