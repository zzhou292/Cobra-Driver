// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef UDP_FLOAT_RECEIVER_CPP__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define UDP_FLOAT_RECEIVER_CPP__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_udp_float_receiver_cpp __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_udp_float_receiver_cpp __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_udp_float_receiver_cpp __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_udp_float_receiver_cpp __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_udp_float_receiver_cpp
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_udp_float_receiver_cpp ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_udp_float_receiver_cpp
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_udp_float_receiver_cpp ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_udp_float_receiver_cpp
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_udp_float_receiver_cpp __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_udp_float_receiver_cpp
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_udp_float_receiver_cpp __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_udp_float_receiver_cpp
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // UDP_FLOAT_RECEIVER_CPP__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
