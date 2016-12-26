//
//  ijklog.h
//  IJKMediaPlayer
//
//  Created by xiaoliumac on 16/4/17.
//  Copyright © 2016年 bilibili. All rights reserved.
//

#ifndef ijklog_h
#define ijklog_h

typedef enum IJKLogLevel {
    k_IJK_LOG_UNKNOWN = 0,
    k_IJK_LOG_DEFAULT = 1,
    
    k_IJK_LOG_VERBOSE = 2,
    k_IJK_LOG_DEBUG   = 3,
    k_IJK_LOG_INFO    = 4,
    k_IJK_LOG_WARN    = 5,
    k_IJK_LOG_ERROR   = 6,
    k_IJK_LOG_FATAL   = 7,
    k_IJK_LOG_SILENT  = 8,
} IJKLogLevel;


#endif /* ijklog_h */
