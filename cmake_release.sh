# Script which generate the project Makefile with release options
#!/bin/sh

cmake -G"Unix Makefiles" -DCMAKE_BUILD_TYPE:STRING=Release

exit 0
