#ifndef EDITOR_OPERATIONS_H
#define EDITOR_OPERATIONS_H

#include "data.h"

extern struct editorConfig E;

void editorInsertChar(int c);
void editorInsertNewLine();
void editorDelChar();

#endif