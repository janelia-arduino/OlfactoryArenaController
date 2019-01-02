// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace olfactory_arena_controller
{
namespace constants
{
CONSTANT_STRING(device_name,"olfactory_arena_controller");

CONSTANT_STRING(firmware_name,"OlfactoryArenaController");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
{
  .name_ptr=&firmware_name,
  .version_major=1,
  .version_minor=1,
  .version_patch=0,
};

const long milliseconds_per_second = 1000;

// Pins

// Units
CONSTANT_STRING(seconds_units,"s");

// Properties
const double travel_per_unit_pulse_duration_element_default = 0.098;

CONSTANT_STRING(expose_angle_property_name,"exposeAngle");
const double expose_angle_element_default = 70;

CONSTANT_STRING(hide_angle_property_name,"hideAngle");
const double hide_angle_element_default = -70;

// Parameters
CONSTANT_STRING(duration_parameter_name,"duration");
const long duration_min = 1;
const long duration_max = 3600;

// Functions
CONSTANT_STRING(expose_function_name,"expose");
CONSTANT_STRING(expose_for_duration_function_name,"exposeForDuration");
CONSTANT_STRING(expose_all_for_duration_function_name,"exposeAllForDuration");
CONSTANT_STRING(hide_function_name,"hide");

// Callbacks
CONSTANT_STRING(expose_all_callback_name,"exposeAll");
CONSTANT_STRING(hide_all_callback_name,"hideAll");
CONSTANT_STRING(toggle_all_callback_name,"toggleAll");

// Errors
}
}
