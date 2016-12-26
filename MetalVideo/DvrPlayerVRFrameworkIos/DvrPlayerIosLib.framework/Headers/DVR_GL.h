//
//  Dvr_log.h
//  librenderproject
//
//  Created by xiaoliumac on 16/5/28.
//  Copyright 漏 2016骞� dlodlo. All rights reserved.
//

#ifndef Dvr_log_h
#define Dvr_log_h

//#define ANDROID_P

#ifdef ANDROID_PLATFORM
//#include <GLES2/gl2.h>
//#include <GLES2/gl2ext.h>
#include "gl_loader.h"
#endif

#ifdef IOS_PLATFORM

#include<OpenGLES/ES2/gl.h>
#include<OpenGLES/ES2/glext.h>

#endif

#endif /* Dvr_log_h */
