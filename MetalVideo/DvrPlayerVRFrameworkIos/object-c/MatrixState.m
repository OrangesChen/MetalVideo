//
//  MatrixState.m
//  FFmpegDecodeToYUV
//
//  Created by xiaoliumac on 15/8/5.
//  Copyright (c) 2015年 dev.temobi. All rights reserved.
//

#import "MatrixState.h"
#import <DvrPlayerIosLib/DVR_matrix.h>
static float mProjMatrix[16];// 4x4矩阵 投影用
static float mVMatrix[16];// 摄像机位置朝向9参数矩阵
static float currMatrix[16];// 当前变换矩阵
// 保护变换矩阵的栈
static float mStack[10][16];
static int stackTop = -1;
// 获取具体物体的总变换矩阵
static float mMVPMatrix[16];
//static float rotationMatrix[16];

@implementation MatrixState

+(void) getFinalMatrix:(float *)matrix
{
    multiplyMM(mMVPMatrix,  0, mVMatrix, 0, currMatrix, 0);
    multiplyMM(mMVPMatrix, 0, mProjMatrix, 0, mMVPMatrix, 0);
    memcpy(matrix, mMVPMatrix, 16*sizeof(float));
}
+(void) setInitStack
{
    int i;
    for(i=0;i<16;i++)
    {
        currMatrix[i]=0;
    }
    setRotateM(currMatrix, 0, 0, 1, 0, 0);
}

+(void) pushMatrix
{
    stackTop++;
    int i;
    for (i=0; i<16; i++) {
        mStack[stackTop][i]=currMatrix[i];
    }
}

+(void) popMatrix
{
    for (int i=0; i<16; i++) {
        currMatrix[i]=mStack[stackTop][i];
        
    }
    stackTop--;
}

+(void) translate:(float)x y:(float)y z:(float)z
{
    translateMValue(currMatrix, 0, x, y, z);
}

+(void) rotate:(float)angle x:(float)x y:(float)y z:(float)z
{
    rotateMValue(currMatrix, 0, angle, x, y, z);
}

+(void) rotateEulerM:(float)x y:(float)y z:(float)z
{
    
}
+(void) setCamera:(float)cx cy:(float)cy cz:(float)cz tx:(float)tx ty:(float)ty tz:(float)tz upx:(float)upx upy:(float)upy upz:(float)upz
{
    setLookAtM(mVMatrix, 0, cx, cy, cz, tx, ty, tz, upx, upy, upz);
}
+(void) setProjectFrustum:(float)left right:(float)right bottom:(float)bottom top:(float)top near:(float)near far:(float)far
{
    frustumM(mProjMatrix, 0, left, right, bottom, top, near, far);
}

+(void) getRotationMatrixFromVector:(float*) datas
{
    getRotationMatrixFromVector(currMatrix,16, datas,4);
    
}
@end
