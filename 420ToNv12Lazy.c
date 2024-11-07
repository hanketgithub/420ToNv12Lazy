//
//  420ToNv12.c
//  420ToNv12
//
//  Created by Hank Lee on 2024-11-07.
//  Copyright (c) 2024 Hank Lee. All rights reserved.
//

#include <stdint.h>

int planar_to_interleave_lazy
(
        uint32_t    wxh,
        uint8_t    *u_et_v,
  const uint8_t    *u,
  const uint8_t    *v
)
{
    for (uint32_t i = 0; i < wxh / 4; i++)
    {
        uint16_t current_uv = (u_et_v[2 * i] << 8) | u_et_v[2 * i + 1];
        uint16_t new_uv = (u[i] << 8) | v[i];

        if ((current_uv ^ new_uv))  // lazy update only if diff
        {
            u_et_v[2 * i]       = u[i];
            u_et_v[2 * i + 1]   = v[i];
        }
    }

    return 0;
}
