// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_msgs:srv/Brakes.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS__SRV__DETAIL__BRAKES__STRUCT_H_
#define ROB599_MSGS__SRV__DETAIL__BRAKES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Brakes in the package rob599_msgs.
typedef struct rob599_msgs__srv__Brakes_Request
{
  bool data;
} rob599_msgs__srv__Brakes_Request;

// Struct for a sequence of rob599_msgs__srv__Brakes_Request.
typedef struct rob599_msgs__srv__Brakes_Request__Sequence
{
  rob599_msgs__srv__Brakes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs__srv__Brakes_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Brakes in the package rob599_msgs.
typedef struct rob599_msgs__srv__Brakes_Response
{
  bool success;
} rob599_msgs__srv__Brakes_Response;

// Struct for a sequence of rob599_msgs__srv__Brakes_Response.
typedef struct rob599_msgs__srv__Brakes_Response__Sequence
{
  rob599_msgs__srv__Brakes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs__srv__Brakes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS__SRV__DETAIL__BRAKES__STRUCT_H_
