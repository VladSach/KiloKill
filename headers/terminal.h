#ifndef TERMINAL_H
#define TERMINAL_H


extern struct editorConfig E;

void die(const char *s);
void disableRawMode();
void enableRawMode();
int editorReadKey();
int getCursorPosition(int *rows, int *cols);
int getWindowSize(int *rows, int *cols);

#endif