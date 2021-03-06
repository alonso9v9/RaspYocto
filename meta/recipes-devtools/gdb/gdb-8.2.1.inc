LICENSE = "GPLv2 & GPLv3 & LGPLv2 & LGPLv3"
LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 \
		    file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 \
		    file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6 \
		    file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674"

SRC_URI = "http://ftp.gnu.org/gnu/gdb/gdb-${PV}.tar.xz \
           file://0002-make-man-install-relative-to-DESTDIR.patch \
           file://0003-mips-linux-nat-Define-_ABIO32-if-not-defined.patch \
           file://0004-ppc-ptrace-Define-pt_regs-uapi_pt_regs-on-GLIBC-syst.patch \
           file://0005-Add-support-for-Renesas-SH-sh4-architecture.patch \
           file://0006-Dont-disable-libreadline.a-when-using-disable-static.patch \
           file://0007-use-asm-sgidefs.h.patch \
           file://0008-Use-exorted-definitions-of-SIGRTMIN.patch \
           file://0009-Change-order-of-CFLAGS.patch \
           file://0010-resolve-restrict-keyword-conflict.patch \
           file://0011-Fix-invalid-sigprocmask-call.patch \
           file://gdbserver-ctrl-c-handling.patch \
           file://0001-Fix-build-with-latest-GCC-9.0-tree.patch \
           file://CVE-2017-9778.patch \
           file://0012-AArch64-Fix-the-gdb-build-with-musl-libc.patch \
           file://CVE-2019-1010180.patch \
"
SRC_URI[md5sum] = "f8b2562e830a4098dd5b5ea9e9296c70"
SRC_URI[sha256sum] = "0a6a432907a03c5c8eaad3c3cffd50c00a40c3a5e3c4039440624bae703f2202"

