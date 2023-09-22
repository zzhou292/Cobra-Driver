// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbridge_test_msgs:srv/TestArrayRequest.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__FUNCTIONS_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rosbridge_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_test_msgs/srv/detail/test_array_request__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestArrayRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestArrayRequest__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestArrayRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/TestArrayRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__srv__TestArrayRequest_Request
 * )) before or use
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Request__init(rosbridge_test_msgs__srv__TestArrayRequest_Request * msg);

/// Finalize srv/TestArrayRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Request__fini(rosbridge_test_msgs__srv__TestArrayRequest_Request * msg);

/// Create srv/TestArrayRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestArrayRequest_Request *
rosbridge_test_msgs__srv__TestArrayRequest_Request__create();

/// Destroy srv/TestArrayRequest message.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Request__destroy(rosbridge_test_msgs__srv__TestArrayRequest_Request * msg);

/// Check for srv/TestArrayRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Request__are_equal(const rosbridge_test_msgs__srv__TestArrayRequest_Request * lhs, const rosbridge_test_msgs__srv__TestArrayRequest_Request * rhs);

/// Copy a srv/TestArrayRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Request__copy(
  const rosbridge_test_msgs__srv__TestArrayRequest_Request * input,
  rosbridge_test_msgs__srv__TestArrayRequest_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestArrayRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestArrayRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestArrayRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TestArrayRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__init(rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * array, size_t size);

/// Finalize array of srv/TestArrayRequest messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__fini(rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * array);

/// Create array of srv/TestArrayRequest messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__create(size_t size);

/// Destroy array of srv/TestArrayRequest messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__destroy(rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * array);

/// Check for srv/TestArrayRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__are_equal(const rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * lhs, const rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * rhs);

/// Copy an array of srv/TestArrayRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence__copy(
  const rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * input,
  rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence * output);

/// Initialize srv/TestArrayRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__srv__TestArrayRequest_Response
 * )) before or use
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Response__init(rosbridge_test_msgs__srv__TestArrayRequest_Response * msg);

/// Finalize srv/TestArrayRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Response__fini(rosbridge_test_msgs__srv__TestArrayRequest_Response * msg);

/// Create srv/TestArrayRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestArrayRequest_Response *
rosbridge_test_msgs__srv__TestArrayRequest_Response__create();

/// Destroy srv/TestArrayRequest message.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Response__destroy(rosbridge_test_msgs__srv__TestArrayRequest_Response * msg);

/// Check for srv/TestArrayRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Response__are_equal(const rosbridge_test_msgs__srv__TestArrayRequest_Response * lhs, const rosbridge_test_msgs__srv__TestArrayRequest_Response * rhs);

/// Copy a srv/TestArrayRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Response__copy(
  const rosbridge_test_msgs__srv__TestArrayRequest_Response * input,
  rosbridge_test_msgs__srv__TestArrayRequest_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestArrayRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestArrayRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestArrayRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TestArrayRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__init(rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * array, size_t size);

/// Finalize array of srv/TestArrayRequest messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__fini(rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * array);

/// Create array of srv/TestArrayRequest messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__create(size_t size);

/// Destroy array of srv/TestArrayRequest messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__destroy(rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * array);

/// Check for srv/TestArrayRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__are_equal(const rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * lhs, const rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * rhs);

/// Copy an array of srv/TestArrayRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence__copy(
  const rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * input,
  rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence * output);

/// Initialize srv/TestArrayRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__srv__TestArrayRequest_Event
 * )) before or use
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Event__init(rosbridge_test_msgs__srv__TestArrayRequest_Event * msg);

/// Finalize srv/TestArrayRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Event__fini(rosbridge_test_msgs__srv__TestArrayRequest_Event * msg);

/// Create srv/TestArrayRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestArrayRequest_Event *
rosbridge_test_msgs__srv__TestArrayRequest_Event__create();

/// Destroy srv/TestArrayRequest message.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Event__destroy(rosbridge_test_msgs__srv__TestArrayRequest_Event * msg);

/// Check for srv/TestArrayRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Event__are_equal(const rosbridge_test_msgs__srv__TestArrayRequest_Event * lhs, const rosbridge_test_msgs__srv__TestArrayRequest_Event * rhs);

/// Copy a srv/TestArrayRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Event__copy(
  const rosbridge_test_msgs__srv__TestArrayRequest_Event * input,
  rosbridge_test_msgs__srv__TestArrayRequest_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_type_hash_t *
rosbridge_test_msgs__srv__TestArrayRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rosbridge_test_msgs__srv__TestArrayRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource *
rosbridge_test_msgs__srv__TestArrayRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TestArrayRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__init(rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * array, size_t size);

/// Finalize array of srv/TestArrayRequest messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__fini(rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * array);

/// Create array of srv/TestArrayRequest messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence *
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__create(size_t size);

/// Destroy array of srv/TestArrayRequest messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__destroy(rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * array);

/// Check for srv/TestArrayRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__are_equal(const rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * lhs, const rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * rhs);

/// Copy an array of srv/TestArrayRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence__copy(
  const rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * input,
  rosbridge_test_msgs__srv__TestArrayRequest_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__FUNCTIONS_H_
