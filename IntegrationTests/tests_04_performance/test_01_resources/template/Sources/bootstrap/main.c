//===----------------------------------------------------------------------===//
//
// This source file is part of the SwiftNIO open source project
//
// Copyright (c) 2017-2018 Apple Inc. and the SwiftNIO project authors
// Licensed under Apache License v2.0
//
// See LICENSE.txt for license information
// See CONTRIBUTORS.txt for the list of SwiftNIO project authors
//
// SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------===//

#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>
#include <atomic-counter.h>
#include <hooked-free.h>

#if !__APPLE__
void free(void *ptr) {
    replacement_free(ptr);
}
#endif

void swift_main(void);

int main() {
    swift_main();
}
