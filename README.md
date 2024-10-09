# This is a template for C++ projects

## Folder Structure

The folder structure is as follows:

```
.vscode/    # VS Code config, build and task files
include/    # Header files (.h)
src/        # source files (.cpp)
bin/        # compiled binaries, excluded via .gitignore
LICENSE
Makefile    
README.md
.gitignore
```

## Files

I included the include/*.h files and their src/*.cpp counterparts as an example how to set up header files.

## Header Guards

Header guards ensure that functions are not defined multiple times, which leads to linker errors.

```
#ifndef CHEF_H
#define CHEF_H

// declarations here

#endif
```
