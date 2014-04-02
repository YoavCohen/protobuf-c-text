/** \file
 * Library header file.
 * Declarations of all functions and data types exported by
 * the text format for protobus library.
 *
 * \author Kevin Lyda <kevin@ie.suberic.net>
 * \date   March 2014
 *
 * \mainpage
 *
 * TODO describe the library.
 */

#ifndef PROTOBUF_C_TEXT_H
#define PROTOBUF_C_TEXT_H

#include <google/protobuf-c/protobuf-c.h>

typedef struct _TextFormatResult {
  char *error_txt;
  int complete;
} TextFormatResult;

/* Output functions. */
extern char *text_format_to_string(ProtobufCMessage *m,
    ProtobufCAllocator *allocator);

/* Input functions. */
extern ProtobufCMessage *text_format_from_string(
    const ProtobufCMessageDescriptor *descriptor,
    char *msg,
    TextFormatResult *result,
    ProtobufCAllocator *allocator);
extern ProtobufCMessage *text_format_from_file(
    const ProtobufCMessageDescriptor *descriptor,
    FILE *msg_file,
    TextFormatResult *result,
    ProtobufCAllocator *allocator);

#endif /* PROTOBUF_C_TEXT_H */
