#ifndef DATA_H
#define DATA_H

#include "includes.h"

struct editorConfig {
    int cx, cy;
    int screenrows;
    int screencols;
    struct termios orig_termios;
};

static struct editorConfig E;

#endif