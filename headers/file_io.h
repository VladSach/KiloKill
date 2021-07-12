#ifndef FILE_IO_H
#define FILE_IO_H

#include "data.h"
#include "includes.h"


extern struct editorConfig E;

void editorOpen(char *filename);
char *editorRowsToString(int *buflen);
void editorSave();

#endif