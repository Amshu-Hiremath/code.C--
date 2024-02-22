#include <libxl.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    BookHandle book = xlCreateBook();
    if (book) {
        if (xlBookLoad(book, "example.xlsx")) {
            SheetHandle sheet = xlBookGetSheet(book, 0);
            if (sheet) {
                int rowCount = xlSheetLastRow(sheet);
                int colCount = xlSheetLastCol(sheet);
                for (int i = 0; i <= rowCount; i++) {
                    for (int j = 0; j <= colCount; j++) {
                        const char* s = xlSheetReadStr(sheet, i, j, NULL);
                        printf("%s\t", s);
                    }
                    printf("\n");
                }
            }
        }
        xlBookRelease(book);
    }
    return 0;
}
