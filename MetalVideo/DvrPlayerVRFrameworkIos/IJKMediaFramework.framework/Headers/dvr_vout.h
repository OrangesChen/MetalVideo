//
//  dvr_vout.h
//  IJKMediaPlayer
//
//  Created by xiaoliumac on 16/4/18.
//  Copyright © 2016年 bilibili. All rights reserved.
//
#import <CoreVideo/CoreVideo.h>
#include "ijksdl_stdinc.h"

#ifndef dvr_vout_h
#define dvr_vout_h

#define DVR_SDL_FORMAT_I420 420
#define DVR_SDL_FORMAT_TVB  1

// 配置纹理
typedef struct Dvr_SDL_VoutOverlay Dvr_SDL_VoutOverlay;
typedef void (^DvrVoutBlock)(Dvr_SDL_VoutOverlay *);
struct Dvr_SDL_VoutOverlay {
    int w; /**< Read-only */
    int h; /**< Read-only */
    Uint32 format; /**< Read-only */
    int planes; /**< Read-only */
    Uint16 *pitches; /**< in bytes, Read-only */
    Uint8 **pixels; /**< Read-write */
    
    int is_private;
    
    int sar_num;
    int sar_den;
    CVPixelBufferRef pixel_buffer;
    
//    void (*func_uploadTexture_dvr)(Dvr_SDL_VoutOverlay *overlay);
    
};



#endif /* dvr_vout_h */
