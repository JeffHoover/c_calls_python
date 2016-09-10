#include <python2.7/Python.h>
#include <stdio.h>

void exec_pycode(const char* py_code);

int main(int argc, char* argv[])
{

        exec_pycode("print \"hello\"");
        return 0;
}


void exec_pycode(const char* py_code)
{
        Py_Initialize();
        PyRun_SimpleString(py_code);
        Py_Finalize();
}
