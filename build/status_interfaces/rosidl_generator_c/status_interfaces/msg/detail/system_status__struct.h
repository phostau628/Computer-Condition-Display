// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from status_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'host_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemStatus in the package status_interfaces.
/**
  * 时间戳字段：记录数据产生的精确时间
  * 类型为ROS 2标准时间类型builtin_interfaces/Time
 */
typedef struct status_interfaces__msg__SystemStatus
{
  builtin_interfaces__msg__Time stamp;
  /// 主机名称字段：标识数据来源的设备名称
  rosidl_runtime_c__String host_name;
  /// CPU使用率：当前系统CPU的总体占用百分比（0-100）
  float cpu_percent;
  /// 内存使用率：已使用内存占总内存的百分比（0-100）
  float memory_percent;
  /// 总内存容量：系统物理内存总大小（通常单位为GB）
  float memory_total;
  /// 可用内存容量：当前可分配的内存大小（通常单位为GB）
  float memory_available;
  /// 网络发送量：累计发送的网络数据总量（单位为字节）
  double net_sent;
  /// 网络接收量：累计接收的网络数据总量（单位为字节）
  double net_recv;
} status_interfaces__msg__SystemStatus;

// Struct for a sequence of status_interfaces__msg__SystemStatus.
typedef struct status_interfaces__msg__SystemStatus__Sequence
{
  status_interfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} status_interfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
