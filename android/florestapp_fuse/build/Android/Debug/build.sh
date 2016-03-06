#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Targets/CPlusPlus/Android/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`/floresta_fuse/app/src/main"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/java/JavaVirtualMachines/jdk1.8.0_45.jdk/Contents/Home"
##endif

##if #(Ant.Directory:IsSet)
PATH="/Users/oscarbeltran/Library/Application Support/Fusetools/Fuse/Android/Ant/bin:$PATH"
##endif

echo "## 1/2: libfloresta_fuse.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

./makew -s -j $JOB_COUNT "$@"

echo ""
echo "## 2/2: floresta_fuse.apk"

if ! which ant > /dev/null 2>&1; then
    echo "ERROR: 'ant' was not found." >&2
    exit 1
fi

ant debug

cd "`dirname "$0"`"
ln -sf floresta_fuse/app/src/main/bin/floresta_fuse-debug.apk floresta_fuse.apk
