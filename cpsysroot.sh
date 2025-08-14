# Hacky script to setup the .mozbuild sysroot to use versions of libc and
# related libraries that are needed by libpartition-alloc.so.
#
# Firefox's build process downloads a custom sysroot rather than using the
# system version of the necessary libraries. When building partition-alloc, it
# links against the system version of these libraries, which are newer than the
# ones present in the .mozbuild sysroot. This causes issues when we try to link
# PA into Firefox, as the libraries in .mozbuild are too old and do not have all
# of the symbols PA needs.
#
# To work around this, we copy the necessary system libraries into .mozbuild,
# backing up the original one for debugging purposes. This is hardcoded to
# assume .mozbuild is in the current user's home directory, and uses the system
# library paths on donna (Ubuntu 24.04).

# Check if ~/.mozbuild exists
if [ ! -d ~/.mozbuild ]; then
    echo "Error: ~/.mozbuild directory does not exist"
    exit 1
fi

# Create backup if it doesn't exist
if [ ! -d ~/.mozbuild.orig ]; then
    echo "Creating backup: copying ~/.mozbuild to ~/.mozbuild.orig"
    cp -r ~/.mozbuild ~/.mozbuild.orig
fi

cd ~/.mozbuild/sysroot-x86_64-linux-gnu

# Copy the shared objects needed by partition-alloc.
cp /lib/x86_64-linux-gnu/libc.so.6 lib/x86_64-linux-gnu/libc-2.19.so
cp /lib/x86_64-linux-gnu/libstdc++.so.6 usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.25 
cp /lib/x86_64-linux-gnu/libm.so.6 lib/x86_64-linux-gnu/libm-2.19.so
cp /lib/x86_64-linux-gnu/libdl.so.2 lib/x86_64-linux-gnu/libdl-2.19.so
cp /lib/x86_64-linux-gnu/libpthread.so.0 lib/x86_64-linux-gnu/libpthread-2.19.so
cp /lib/x86_64-linux-gnu/ld-linux-x86-64.so.2 lib/x86_64-linux-gnu/ld-2.19.so
cp /lib/x86_64-linux-gnu/librt.so.1 lib/x86_64-linux-gnu/librt-2.19.so
