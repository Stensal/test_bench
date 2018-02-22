#!/bin/sh

parallel=$1
: ${parallel:=1}

make -j${parallel} algorithms       || exit 1
make -j${parallel} atomics          || exit 1
make -j${parallel} containers       || exit 1
make -j${parallel} depr             || exit 1
make -j${parallel} diagnostics      || exit 1
make -j${parallel} experimental     || exit 1
make -j${parallel} extensions       || exit 1
make -j${parallel} input.output     || exit 1
make -j${parallel} iterators        || exit 1
make -j${parallel} language.support || exit 1
make -j${parallel} localization     || exit 1
make -j${parallel} numerics         || exit 1
make -j${parallel} re               || exit 1
make -j${parallel} strings          || exit 1
make -j${parallel} support          || exit 1
make -j${parallel} thread           || exit 1
make -j${parallel} utilities        || exit 1
make -j${parallel} misc             || exit 1

make -j${parallel} test/algorithms       || exit 1
make -j${parallel} test/atomics          || exit 1
make -j${parallel} test/containers       || exit 1
make -j${parallel} test/depr             || exit 1
make -j${parallel} test/diagnostics      || exit 1
make -j${parallel} test/experimental     || exit 1
make -j${parallel} test/extensions       || exit 1
make -j${parallel} test/input.output     || exit 1
make -j${parallel} test/iterators        || exit 1
make -j${parallel} test/language.support || exit 1
make -j${parallel} test/localization     || exit 1
make -j${parallel} test/numerics         || exit 1
make -j${parallel} test/re               || exit 1
make -j${parallel} test/strings          || exit 1
make -j${parallel} test/support          || exit 1
make -j${parallel} test/thread           || exit 1
make -j${parallel} test/utilities        || exit 1
make -j${parallel} test/misc             || exit 1
