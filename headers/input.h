#ifndef INPUT_H
#define INPUT_H

#include "data.h"
#include "terminal.h"

#define CTRL_KEY(k) ((k) & 0x1f)

extern struct editorConfig E;

void editorMoveCursor(int key);
void editorProcessKeypress();

#endif