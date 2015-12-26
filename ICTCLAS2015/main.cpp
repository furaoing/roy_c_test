#include "NLPIR.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

    const char * result;
    char s[2000] = "我的等等等等等等的";
    //char * data_path = "/home/rao/C++/test/ICTCLAS2015";
    NLPIR_Init(0, 1, 0);
    result = NLPIR_ParagraphProcess(s, 0);
    printf("%s", result);
    NLPIR_Exit();
    return 0;
}