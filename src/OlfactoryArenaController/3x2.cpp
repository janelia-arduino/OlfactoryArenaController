// ----------------------------------------------------------------------------
// 3x2.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "3x2.h"


#if defined(__MK20DX256__)

namespace olfactory_arena_controller
{
namespace constants
{
// Pins

// Units

// Properties
const long channel_count = CHANNEL_COUNT;

const double travel_per_unit_pulse_duration_default[CHANNEL_COUNT] =
{
  travel_per_unit_pulse_duration_element_default,
  travel_per_unit_pulse_duration_element_default,
  travel_per_unit_pulse_duration_element_default,
};

const long velocity_limit_default[CHANNEL_COUNT] =
{
  velocity_limit_element_default,
  velocity_limit_element_default,
  velocity_limit_element_default,
};

const double expose_angle_default[CHANNEL_COUNT] =
{
  expose_angle_element_default,
  expose_angle_element_default,
  expose_angle_element_default,
};

const double hide_angle_default[CHANNEL_COUNT] =
{
  hide_angle_element_default,
  hide_angle_element_default,
  hide_angle_element_default,
};

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
