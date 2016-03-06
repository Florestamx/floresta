#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Targets/CPlusPlus/Android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "floresta_fuse"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "floresta_fuse.apk" \
    --package=com.floresta_fuse \
    --activity=floresta_fuse \
    --sym-dir="floresta_fuse/src/main/.uno" \
    "$@"
