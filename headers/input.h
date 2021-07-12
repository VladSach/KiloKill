#ifndef INPUT_H
#define INPUT_H

#include "data.h"

#define KILO_QUIT_TIMES 3
#define CTRL_KEY(k) ((k) & 0x1f)

extern struct editorConfig E;

char *editorPrompt(char *prompt, void (*callback)(char *, int));
void editorMoveCursor(int key);
void editorProcessKeypress();

#endif