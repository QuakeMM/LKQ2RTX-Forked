/*
<<<<<<< HEAD:src/refresh/vkpt/shader/fsr_easu_fp32.comp
Copyright (C) 2019, NVIDIA CORPORATION. All rights reserved.
Copyright (C) 2021, Frank Richter. All rights reserved.
=======
Copyright (C) 2021, NVIDIA CORPORATION. All rights reserved.
>>>>>>> upstream/master:src/refresh/vkpt/cameras.h

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

<<<<<<< HEAD:src/refresh/vkpt/shader/fsr_easu_fp32.comp
#version 450
#extension GL_GOOGLE_include_directive    : enable
#extension GL_ARB_separate_shader_objects : enable
#extension GL_EXT_nonuniform_qualifier    : enable

#define FSR_EASU_F 1

// Macros for FP16/FP32 abstraction
#define fsr_vec3    AF3
#define fsr_vec4    AF4
#define FsrEasu     FsrEasuF
#define FsrEasuR    FsrEasuRF
#define FsrEasuG    FsrEasuGF
#define FsrEasuB    FsrEasuBF

// Actual implementation
#include "fsr_easu.glsl"
=======
#ifndef __CAMERAS_H_
#define __CAMERAS_H_

typedef struct bsp_mesh_s bsp_mesh_t;

void vkpt_cameras_init(void);
void vkpt_cameras_shutdown(void);
void vkpt_cameras_load(bsp_mesh_t* wm, const char* map_name);

#endif
>>>>>>> upstream/master:src/refresh/vkpt/cameras.h
