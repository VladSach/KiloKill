#ifndef ROW_OPERATIONS_H
#define ROW_OPERATIONS_H

#include "data.h"
#define KILO_TAB_STOP 8

int editorRowCxToRx(erow *row, int cx);
void editorUpdateRow(erow *row);
void editorAppendRow(char *s, size_t len);


#endif