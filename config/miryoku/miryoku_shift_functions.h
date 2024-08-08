// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_KLUDGE_GLOBALSHIFTFUNCTIONS)
  #define U_RGB_TOG &u_rgb_tog
  #define U_RGB_EFF &u_rgb_eff
  #define U_RGB_HUI &u_rgb_hui
  #define U_RGB_SAI &u_rgb_sai
  #define U_RGB_BRI &u_rgb_bri
  #define U_EP_TOG &u_ep_tog
#else
  #define U_RGB_TOG &none RGB_TOG
  #define U_RGB_EFF &none RGB_EFF
  #define U_RGB_HUI &none RGB_HUI
  #define U_RGB_SAI &none RGB_SAI
  #define U_RGB_BRI &none RGB_BRI
  #define U_EP_TOG &none EP_TOG
#endif
