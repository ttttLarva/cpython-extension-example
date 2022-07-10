from distutils.core import Extension
from distutils.core import setup

setup(
    name="ttlarva",
    version="0.0.1",
    ext_modules=[
        Extension(
            "ttlarva",
            sources=["src/python_extension.c"],
        ),
    ],
)
