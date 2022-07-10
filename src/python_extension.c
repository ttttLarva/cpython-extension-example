#include <Python.h>

static PyObject * add_two(PyObject *self, PyObject *args) {
    float float_arg1;
    float float_arg2;
    if (!PyArg_ParseTuple(args, "ff", &float_arg1, &float_arg2)) {
        return NULL;
    }
    return Py_BuildValue("f", float_arg1 + float_arg2);
}

static PyMethodDef ttlarva_funcs[] = {
    { "add", add_two, METH_VARARGS, "add two thing - IN C!" },
    { NULL, NULL, 0, NULL }
};

static PyModuleDef ttlarva = {
    PyModuleDef_HEAD_INIT,
    "ttlarva",   // name of module
    NULL,        // module documentation
    -1,          // size of per-interpreter state of module
    ttlarva_funcs
};

PyMODINIT_FUNC
PyInit_ttlarva(void) {
    return PyModule_Create(&ttlarva);
}
