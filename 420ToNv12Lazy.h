//
//  420ToNv12Lazy.h
//  420ToNv12Lazy
//
//  Created by Hank Lee on 2024-11-07.
//  Copyright (c) 2024 Hank Lee. All rights reserved.
//

#ifndef ___420ToNv12Lazy___
#define ___420ToNv12Lazy___


int planar_to_interleave_lazy
(
        uint32_t    wxh,
        uint8_t    *u_et_v,
  const uint8_t    *u,
  const uint8_t    *v
);



#endif
