# Building and Running #

The double_to_complex code uses cmake to build all source files. This is intended for an "out of source build", namely used like this:

```
#!bash
mkdir -p build
cd build
cmake -DD2C_COMPLEX:BOOL=ON ../
make

bin/d2c
```
