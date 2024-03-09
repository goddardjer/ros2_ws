// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rob599_msgs:action/LaunchRocket.idl
// generated code does not contain a copyright notice
#include "rob599_msgs/action/detail/launch_rocket__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rob599_msgs__action__LaunchRocket_Goal__init(rob599_msgs__action__LaunchRocket_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // countdown
  return true;
}

void
rob599_msgs__action__LaunchRocket_Goal__fini(rob599_msgs__action__LaunchRocket_Goal * msg)
{
  if (!msg) {
    return;
  }
  // countdown
}

bool
rob599_msgs__action__LaunchRocket_Goal__are_equal(const rob599_msgs__action__LaunchRocket_Goal * lhs, const rob599_msgs__action__LaunchRocket_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // countdown
  if (lhs->countdown != rhs->countdown) {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_Goal__copy(
  const rob599_msgs__action__LaunchRocket_Goal * input,
  rob599_msgs__action__LaunchRocket_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // countdown
  output->countdown = input->countdown;
  return true;
}

rob599_msgs__action__LaunchRocket_Goal *
rob599_msgs__action__LaunchRocket_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Goal * msg = (rob599_msgs__action__LaunchRocket_Goal *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_Goal));
  bool success = rob599_msgs__action__LaunchRocket_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_Goal__destroy(rob599_msgs__action__LaunchRocket_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_Goal__Sequence__init(rob599_msgs__action__LaunchRocket_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Goal * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_Goal *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_Goal__Sequence__fini(rob599_msgs__action__LaunchRocket_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_Goal__Sequence *
rob599_msgs__action__LaunchRocket_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Goal__Sequence * array = (rob599_msgs__action__LaunchRocket_Goal__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_Goal__Sequence__destroy(rob599_msgs__action__LaunchRocket_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_Goal__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_Goal__Sequence * lhs, const rob599_msgs__action__LaunchRocket_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_Goal__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_Goal__Sequence * input,
  rob599_msgs__action__LaunchRocket_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_Goal * data =
      (rob599_msgs__action__LaunchRocket_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
rob599_msgs__action__LaunchRocket_Result__init(rob599_msgs__action__LaunchRocket_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    rob599_msgs__action__LaunchRocket_Result__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__action__LaunchRocket_Result__fini(rob599_msgs__action__LaunchRocket_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
rob599_msgs__action__LaunchRocket_Result__are_equal(const rob599_msgs__action__LaunchRocket_Result * lhs, const rob599_msgs__action__LaunchRocket_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_Result__copy(
  const rob599_msgs__action__LaunchRocket_Result * input,
  rob599_msgs__action__LaunchRocket_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

rob599_msgs__action__LaunchRocket_Result *
rob599_msgs__action__LaunchRocket_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Result * msg = (rob599_msgs__action__LaunchRocket_Result *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_Result));
  bool success = rob599_msgs__action__LaunchRocket_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_Result__destroy(rob599_msgs__action__LaunchRocket_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_Result__Sequence__init(rob599_msgs__action__LaunchRocket_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Result * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_Result *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_Result__Sequence__fini(rob599_msgs__action__LaunchRocket_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_Result__Sequence *
rob599_msgs__action__LaunchRocket_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Result__Sequence * array = (rob599_msgs__action__LaunchRocket_Result__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_Result__Sequence__destroy(rob599_msgs__action__LaunchRocket_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_Result__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_Result__Sequence * lhs, const rob599_msgs__action__LaunchRocket_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_Result__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_Result__Sequence * input,
  rob599_msgs__action__LaunchRocket_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_Result * data =
      (rob599_msgs__action__LaunchRocket_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rob599_msgs__action__LaunchRocket_Feedback__init(rob599_msgs__action__LaunchRocket_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current
  return true;
}

void
rob599_msgs__action__LaunchRocket_Feedback__fini(rob599_msgs__action__LaunchRocket_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current
}

bool
rob599_msgs__action__LaunchRocket_Feedback__are_equal(const rob599_msgs__action__LaunchRocket_Feedback * lhs, const rob599_msgs__action__LaunchRocket_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_Feedback__copy(
  const rob599_msgs__action__LaunchRocket_Feedback * input,
  rob599_msgs__action__LaunchRocket_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  return true;
}

rob599_msgs__action__LaunchRocket_Feedback *
rob599_msgs__action__LaunchRocket_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Feedback * msg = (rob599_msgs__action__LaunchRocket_Feedback *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_Feedback));
  bool success = rob599_msgs__action__LaunchRocket_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_Feedback__destroy(rob599_msgs__action__LaunchRocket_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_Feedback__Sequence__init(rob599_msgs__action__LaunchRocket_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Feedback * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_Feedback *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_Feedback__Sequence__fini(rob599_msgs__action__LaunchRocket_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_Feedback__Sequence *
rob599_msgs__action__LaunchRocket_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_Feedback__Sequence * array = (rob599_msgs__action__LaunchRocket_Feedback__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_Feedback__Sequence__destroy(rob599_msgs__action__LaunchRocket_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_Feedback__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_Feedback__Sequence * lhs, const rob599_msgs__action__LaunchRocket_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_Feedback__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_Feedback__Sequence * input,
  rob599_msgs__action__LaunchRocket_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_Feedback * data =
      (rob599_msgs__action__LaunchRocket_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "rob599_msgs/action/detail/launch_rocket__functions.h"

bool
rob599_msgs__action__LaunchRocket_SendGoal_Request__init(rob599_msgs__action__LaunchRocket_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!rob599_msgs__action__LaunchRocket_Goal__init(&msg->goal)) {
    rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(rob599_msgs__action__LaunchRocket_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  rob599_msgs__action__LaunchRocket_Goal__fini(&msg->goal);
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Request__are_equal(const rob599_msgs__action__LaunchRocket_SendGoal_Request * lhs, const rob599_msgs__action__LaunchRocket_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!rob599_msgs__action__LaunchRocket_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Request__copy(
  const rob599_msgs__action__LaunchRocket_SendGoal_Request * input,
  rob599_msgs__action__LaunchRocket_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!rob599_msgs__action__LaunchRocket_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

rob599_msgs__action__LaunchRocket_SendGoal_Request *
rob599_msgs__action__LaunchRocket_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_SendGoal_Request * msg = (rob599_msgs__action__LaunchRocket_SendGoal_Request *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Request));
  bool success = rob599_msgs__action__LaunchRocket_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Request__destroy(rob599_msgs__action__LaunchRocket_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__init(rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_SendGoal_Request * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_SendGoal_Request *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__fini(rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence *
rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * array = (rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__destroy(rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * lhs, const rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * input,
  rob599_msgs__action__LaunchRocket_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_SendGoal_Request * data =
      (rob599_msgs__action__LaunchRocket_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rob599_msgs__action__LaunchRocket_SendGoal_Response__init(rob599_msgs__action__LaunchRocket_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rob599_msgs__action__LaunchRocket_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Response__fini(rob599_msgs__action__LaunchRocket_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Response__are_equal(const rob599_msgs__action__LaunchRocket_SendGoal_Response * lhs, const rob599_msgs__action__LaunchRocket_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Response__copy(
  const rob599_msgs__action__LaunchRocket_SendGoal_Response * input,
  rob599_msgs__action__LaunchRocket_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rob599_msgs__action__LaunchRocket_SendGoal_Response *
rob599_msgs__action__LaunchRocket_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_SendGoal_Response * msg = (rob599_msgs__action__LaunchRocket_SendGoal_Response *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Response));
  bool success = rob599_msgs__action__LaunchRocket_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Response__destroy(rob599_msgs__action__LaunchRocket_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__init(rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_SendGoal_Response * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_SendGoal_Response *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__fini(rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence *
rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * array = (rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__destroy(rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * lhs, const rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * input,
  rob599_msgs__action__LaunchRocket_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_SendGoal_Response * data =
      (rob599_msgs__action__LaunchRocket_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
rob599_msgs__action__LaunchRocket_GetResult_Request__init(rob599_msgs__action__LaunchRocket_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rob599_msgs__action__LaunchRocket_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Request__fini(rob599_msgs__action__LaunchRocket_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Request__are_equal(const rob599_msgs__action__LaunchRocket_GetResult_Request * lhs, const rob599_msgs__action__LaunchRocket_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Request__copy(
  const rob599_msgs__action__LaunchRocket_GetResult_Request * input,
  rob599_msgs__action__LaunchRocket_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

rob599_msgs__action__LaunchRocket_GetResult_Request *
rob599_msgs__action__LaunchRocket_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_GetResult_Request * msg = (rob599_msgs__action__LaunchRocket_GetResult_Request *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_GetResult_Request));
  bool success = rob599_msgs__action__LaunchRocket_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Request__destroy(rob599_msgs__action__LaunchRocket_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__init(rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_GetResult_Request * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_GetResult_Request *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__fini(rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence *
rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * array = (rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__destroy(rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * lhs, const rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * input,
  rob599_msgs__action__LaunchRocket_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_GetResult_Request * data =
      (rob599_msgs__action__LaunchRocket_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rob599_msgs/action/detail/launch_rocket__functions.h"

bool
rob599_msgs__action__LaunchRocket_GetResult_Response__init(rob599_msgs__action__LaunchRocket_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!rob599_msgs__action__LaunchRocket_Result__init(&msg->result)) {
    rob599_msgs__action__LaunchRocket_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Response__fini(rob599_msgs__action__LaunchRocket_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  rob599_msgs__action__LaunchRocket_Result__fini(&msg->result);
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Response__are_equal(const rob599_msgs__action__LaunchRocket_GetResult_Response * lhs, const rob599_msgs__action__LaunchRocket_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!rob599_msgs__action__LaunchRocket_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Response__copy(
  const rob599_msgs__action__LaunchRocket_GetResult_Response * input,
  rob599_msgs__action__LaunchRocket_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!rob599_msgs__action__LaunchRocket_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

rob599_msgs__action__LaunchRocket_GetResult_Response *
rob599_msgs__action__LaunchRocket_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_GetResult_Response * msg = (rob599_msgs__action__LaunchRocket_GetResult_Response *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_GetResult_Response));
  bool success = rob599_msgs__action__LaunchRocket_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Response__destroy(rob599_msgs__action__LaunchRocket_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__init(rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_GetResult_Response * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_GetResult_Response *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__fini(rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence *
rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * array = (rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__destroy(rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * lhs, const rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * input,
  rob599_msgs__action__LaunchRocket_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_GetResult_Response * data =
      (rob599_msgs__action__LaunchRocket_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "rob599_msgs/action/detail/launch_rocket__functions.h"

bool
rob599_msgs__action__LaunchRocket_FeedbackMessage__init(rob599_msgs__action__LaunchRocket_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!rob599_msgs__action__LaunchRocket_Feedback__init(&msg->feedback)) {
    rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(rob599_msgs__action__LaunchRocket_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  rob599_msgs__action__LaunchRocket_Feedback__fini(&msg->feedback);
}

bool
rob599_msgs__action__LaunchRocket_FeedbackMessage__are_equal(const rob599_msgs__action__LaunchRocket_FeedbackMessage * lhs, const rob599_msgs__action__LaunchRocket_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rob599_msgs__action__LaunchRocket_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_FeedbackMessage__copy(
  const rob599_msgs__action__LaunchRocket_FeedbackMessage * input,
  rob599_msgs__action__LaunchRocket_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rob599_msgs__action__LaunchRocket_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

rob599_msgs__action__LaunchRocket_FeedbackMessage *
rob599_msgs__action__LaunchRocket_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_FeedbackMessage * msg = (rob599_msgs__action__LaunchRocket_FeedbackMessage *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__action__LaunchRocket_FeedbackMessage));
  bool success = rob599_msgs__action__LaunchRocket_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__action__LaunchRocket_FeedbackMessage__destroy(rob599_msgs__action__LaunchRocket_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__init(rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_FeedbackMessage * data = NULL;

  if (size) {
    data = (rob599_msgs__action__LaunchRocket_FeedbackMessage *)allocator.zero_allocate(size, sizeof(rob599_msgs__action__LaunchRocket_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__action__LaunchRocket_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__fini(rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence *
rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * array = (rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence *)allocator.allocate(sizeof(rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__destroy(rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__are_equal(const rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * lhs, const rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence__copy(
  const rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * input,
  rob599_msgs__action__LaunchRocket_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__action__LaunchRocket_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__action__LaunchRocket_FeedbackMessage * data =
      (rob599_msgs__action__LaunchRocket_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__action__LaunchRocket_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__action__LaunchRocket_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__action__LaunchRocket_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
