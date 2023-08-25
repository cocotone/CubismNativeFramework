/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 live2d_cubism_framework
  vendor:             Live2D
  version:            1.0.0
  name:               Live2D Cubism Framework
  description:        Classes to creating Live2D application
  website:            
  license:            
  minimumCppStandard: 17

  dependencies:       juce_opengl

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once
#define LIVE2D_CUBISM_FRAMEWORK_H_INCLUDED

#include <juce_opengl/juce_opengl.h>

//==============================================================================
/** Config: CSM_TARGET_JUCE_GL
    Enables the juce::gl backend for rendering.
*/
#ifndef CSM_TARGET_JUCE_GL
 #define CSM_TARGET_JUCE_GL 1
#endif

#include "CubismFramework.hpp"
