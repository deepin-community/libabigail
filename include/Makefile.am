## SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
pkginclude_HEADERS =	\
abg-sptr-utils.h	\
abg-interned-str.h	\
abg-ir.h		\
abg-corpus.h		\
abg-fe-iface.h		\
abg-elf-based-reader.h  \
abg-elf-reader.h	\
abg-reader.h		\
abg-dwarf-reader.h	\
abg-writer.h		\
abg-comparison.h	\
abg-reporter.h		\
abg-suppression.h	\
abg-comp-filter.h	\
abg-diff-utils.h	\
abg-libxml-utils.h	\
abg-fwd.h		\
abg-hash.h		\
abg-tools-utils.h	\
abg-config.h		\
abg-ini.h		\
abg-workers.h		\
abg-traverse.h		\
abg-cxx-compat.h	\
abg-version.h		\
abg-viz-common.h	\
abg-viz-dot.h		\
abg-viz-svg.h		\
abg-regex.h

if CTF_READER
pkginclude_HEADERS += abg-ctf-reader.h
endif

if BTF_READER
pkginclude_HEADERS += abg-btf-reader.h
endif

EXTRA_DIST = abg-version.h.in
