//===- version.h -------------------------------------------------*- C++-*-===//
//
//  Copyright (C) 2018-2019 GrammaTech, Inc.
//
//  This code is licensed under the MIT license. See the LICENSE file in the
//  project root for license terms.
//
//  This project is sponsored by the Office of Naval Research, One Liberty
//  Center, 875 N. Randolph Street, Arlington, VA 22203 under contract #
//  N68335-17-C-0700.  The content of the information does not necessarily
//  reflect the position or policy of the Government and no official
//  endorsement should be inferred.
//
//===----------------------------------------------------------------------===//

#ifndef GTIRB_VERSION_H
#define GTIRB_VERSION_H

/**@def GTIRB_MAJOR_VERSION
   Major Version
*/
#define GTIRB_MAJOR_VERSION 0

/**@def GTIRB_MINOR_VERSION
   Minor Version
*/
#define GTIRB_MINOR_VERSION 1

/**@def GTIRB_PATCH_VERSION
   Patch Version
*/
#define GTIRB_PATCH_VERSION 0

#define GTIRB_STR_HELPER(x) #x
#define GTIRB_STR(x) GTIRB_STR_HELPER(x)

/// \file version.h
/// \brief Holds the version macros. Read from version.txt

/**@def GTIRB_VERSION_STRING
   Full version
*/
#define GTIRB_VERSION_STRING                                                   \
  (GTIRB_STR(GTIRB_MAJOR_VERSION) "." GTIRB_STR(                               \
      GTIRB_MINOR_VERSION) "." GTIRB_STR(GTIRB_PATCH_VERSION))

#endif
