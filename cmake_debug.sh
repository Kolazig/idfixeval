# Script which generate the project Makefile with debug options

#!/bin/sh
cmake -G"Unix Makefiles" -DCMAKE_BUILD_TYPE:STRING=Debug
exit 0
