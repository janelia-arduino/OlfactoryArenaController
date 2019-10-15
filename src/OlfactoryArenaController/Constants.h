// ----------------------------------------------------------------------------
// Constants.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef OLFACTORY_ARENA_CONTROLLER_CONSTANTS_H
#define OLFACTORY_ARENA_CONTROLLER_CONSTANTS_H
#include <ConstantVariable.h>
#include <ServoController.h>


namespace olfactory_arena_controller
{
namespace constants
{
//MAX values must be >= 1, >= created/copied count, < RAM limit
enum{PROPERTY_COUNT_MAX=2};
enum{PARAMETER_COUNT_MAX=1};
enum{FUNCTION_COUNT_MAX=4};
enum{CALLBACK_COUNT_MAX=3};

extern ConstantString device_name;

extern ConstantString firmware_name;
extern const modular_server::FirmwareInfo firmware_info;

// Pins

// Units
extern ConstantString seconds_units;

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern const long channel_count;

extern const double travel_per_unit_pulse_duration_element_default;

extern ConstantString expose_angle_property_name;
extern const double expose_angle_element_default;

extern ConstantString hide_angle_property_name;
extern const double hide_angle_element_default;

// Parameters
extern ConstantString duration_parameter_name;
extern const long duration_min;
extern const long duration_max;

// Functions
extern ConstantString expose_function_name;
extern ConstantString expose_for_duration_function_name;
extern ConstantString expose_all_for_duration_function_name;
extern ConstantString hide_function_name;

// Callbacks
extern ConstantString expose_all_callback_name;
extern ConstantString hide_all_callback_name;
extern ConstantString toggle_all_callback_name;

// Errors
}
}
#include "5x3.h"
#include "3x2.h"
#endif
