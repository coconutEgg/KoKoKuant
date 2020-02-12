#ifndef _KOKOREADER_
#define _KOKOREADER_

#include <cstdio>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>


#include <string>

#include "kokoMatrix.hpp"

#define STDOUT 1

namespace koko
{



class KokoBaseReader
{
public:
    virtual bool read_from(const std::string &){};
    virtual bool write_to(int flag = STDOUT, std::string filename = "") const{};

private:
    KokoMatrix *kmp;

};

class KokoCSVReader : public KokoBaseReader
{

};

class KokoXMLReader : public KokoBaseReader
{
};

class KoKoJsonReader : public KokoBaseReader
{
};

class KokoURLReader : public KokoBaseReader
{
};

} // namespace koko

#endif