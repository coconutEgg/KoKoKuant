#ifndef _KERROR_
#define _KERROR_

#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

static void errmsg(int fd, int err, const char *str = "")
{
    char buf[256];
    sprintf(buf, "err: %s . errno = %d, errstr = %s", str, err, strerror(err));
    write(fd, buf, strlen(buf)+1);
}

#endif