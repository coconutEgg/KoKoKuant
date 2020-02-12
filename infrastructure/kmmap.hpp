#ifndef _KMMAP_HPP_
#define _KMMAP_HPP_

//cpp headers
#include <string>

//linux/unix c headers
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

//project headers
#include "kerror.hpp"
#include "kfcntl.hpp"

class Kmmap
{

public:
    Kmmap(const std::string &str)
        : filename(str){};

    void kread(std::string filename = NOFILENAME);

    void kwrite(std::string filename = NOFILENAME) const;

    void reset_filename(const std::string &str);

private:
    std::string filename;
    char *pdata;
};

#endif