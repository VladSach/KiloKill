#ifndef FIND_H
#define FIND_H


#include "data.h"

extern struct editorConfig E;

void editorFind();
void editorFindCallback(char *query, int key);

#endif