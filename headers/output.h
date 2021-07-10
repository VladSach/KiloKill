#ifndef OUTPUT_H
#define OUTPUT_H

#include "data.h"
#include "append_buffer.h"
#include "row_operations.h"

#define KILO_VERSION "0.0.1"

extern struct editorConfig E;

void editorScroll();
void editorDrawRows(struct abuf *ab);
void editorDrawStatusBar(struct abuf *ab);
void editorDrawMessageBar(struct abuf *ab);
void editorRefreshScreen();
void editorSetStatusMessage(const char *fmt, ...);

#endif