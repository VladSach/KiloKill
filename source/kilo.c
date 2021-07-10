#include "data.h"
#include "input.h"
#include "output.h"
#include "terminal.h"
#include "append_buffer.h"
#include "row_operations.h"

extern struct editorConfig E;

// file i/o
void editorOpen(char *filename) {
    free(E.filename);
    E.filename = strdup(filename);

    FILE *fp = fopen(filename, "r");
    if (!fp) die("fopen");

    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;
    while ((linelen = getline(&line, &linecap, fp)) != -1) {
        while (linelen > 0 && (line[linelen - 1] == '\n' ||
                               line[linelen - 1] == '\r' ))
            linelen--;
        editorAppendRow(line, linelen);
    }
    free(line);
    fclose(fp);
}

// init
void  initEditor() {
    E.cx = 0;
    E.cy = 0;
    E.rx = 0;
    E.rowoff = 0;
    E.coloff = 0;
    E.numrows = 0;
    E.row = NULL;
    E.filename = NULL;
    E.statusmsg[0] = '\0';
    E.statusmsg_time = 0;

    if (getWindowSize(&E.screenrows, &E.screencols) == -1) die("getWindowSize");

    E.screenrows -= 2;
}

int main(int argc, char *argv[]) {
    enableRawMode();
    initEditor();
    if (argc >= 2) editorOpen(argv[1]);

    editorSetStatusMessage("HELP: Ctrl-Q = quit");

    while (1) {
        editorRefreshScreen();
        editorProcessKeypress();
    }
    
    return 0;
}