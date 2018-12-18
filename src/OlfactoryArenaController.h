// ----------------------------------------------------------------------------
// OlfactoryArenaController.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef OLFACTORY_ARENA_CONTROLLER_H
#define OLFACTORY_ARENA_CONTROLLER_H
#include <ArduinoJson.h>
#include <JsonStream.h>
#include <Array.h>
#include <Vector.h>
#include <ConstantVariable.h>
#include <Functor.h>

#include <ModularServer.h>
#include <ModularDeviceBase.h>
#include <ServoController.h>

#include "OlfactoryArenaController/Constants.h"


class OlfactoryArenaController : public ServoController
{
public:
  OlfactoryArenaController();
  virtual void setup();

private:
  modular_server::Property properties_[olfactory_arena_controller::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[olfactory_arena_controller::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[olfactory_arena_controller::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[olfactory_arena_controller::constants::CALLBACK_COUNT_MAX];

  // Handlers

};

#endif
