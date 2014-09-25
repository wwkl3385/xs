
#include "main.h"
#include "CReg.h"
#include "CLogin.h"

#ifdef XS_AUTO_GEN_FILES
int g_mem_file_count = 0;
char* g_mem_files[1] = {NULL};
#endif

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    xs_init();

    CLogin reg;
    reg.exec();

    return app.exec();
}
