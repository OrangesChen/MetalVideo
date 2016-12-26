//
//  MatrixState.h
//  FFmpegDecodeToYUV
//
//  Created by xiaoliumac on 15/8/5.
//  Copyright (c) 2015年 dev.temobi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MatrixState : NSObject
+(void) setInitStack;
+(void) pushMatrix;
+(void) popMatrix;
+(void) translate:(float) x y:(float) y z:(float) z;
+(void) rotate:(float) angle x:(float) x y:(float)y z:(float)z;
+(void) rotateEulerM:(float)x y:(float) y z:(float)z;
+(void) setCamera:(float) cx cy:(float)cy cz:(float) cz tx:(float)tx ty:(float)ty tz:(float)tz upx:(float)upx upy:(float)upy upz:(float)upz;
+(void) setProjectFrustum:(float) left right:(float)right bottom:(float)bottom top:(float)top near:(float)near far:(float) far;
+(void) getFinalMatrix:(float*) matrix;

+(void) getRotationMatrixFromVector:(float*) datas;

@end
