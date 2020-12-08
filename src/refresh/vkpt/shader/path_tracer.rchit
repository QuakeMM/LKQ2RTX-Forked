/*
Copyright (C) 2018 Christoph Schied
Copyright (C) 2019, NVIDIA CORPORATION. All rights reserved.

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

#version 460
#extension GL_GOOGLE_include_directive    : enable

#include "path_tracer.h"
#include "utils.glsl"

#define GLOBAL_TEXTURES_DESC_SET_IDX 2
#include "global_textures.h"

#define VERTEX_BUFFER_DESC_SET_IDX 3
#define VERTEX_READONLY 1
#include "vertex_buffer.h"

#include "path_tracer_hit_shaders.h"

rt_rayPayloadIn RayPayload ray_payload;

rt_hitAttribute vec3 hit_attribs;

void
main()
{
	pt_logic_rchit(ray_payload, gl_PrimitiveID, rt_InstanceCustomIndex, rt_HitT, hit_attribs.xy);
}
