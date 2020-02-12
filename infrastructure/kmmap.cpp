#include "kmmap.hpp"

#include <string.h>

void Kmmap::kread(std::string filename = NOFILENAME)
{
    int fd = kopen(filename);
}

void Kmmap::kwrite(std::string filename = NOFILENAME) const
{
    int fd = kopen(filename);
}