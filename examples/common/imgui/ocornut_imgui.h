/*
 * Copyright 2014-2015 Daniel Collin. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#ifndef OCORNUT_IMGUI_H_HEADER_GUARD
#define OCORNUT_IMGUI_H_HEADER_GUARD

#include <ocornut-imgui/imgui.h>

void IMGUI_create();
void IMGUI_destroy();
void IMGUI_beginFrame(int32_t _mx, int32_t _my, uint8_t _button, int _width, int _height, uint8_t _viewId = 31);
void IMGUI_endFrame();

#endif // OCORNUT_IMGUI_H_HEADER_GUARD
