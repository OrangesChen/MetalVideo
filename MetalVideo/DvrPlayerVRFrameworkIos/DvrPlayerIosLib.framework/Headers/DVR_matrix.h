//
//  Matrix.h
//  Created by xiaoliu on 15/8/5.
//  Copyright (c) 2015年 dev.temobi. All rights reserved.
//

#ifndef __Matrix__
#define __Matrix__

#include <stdio.h>
#define false 0
#define  true 1
#ifndef __PI__
#define __PI__
#define PI 3.14159265358979323846
#endif

void setRotateM(float* rm, int rmOffset,float a, float x, float y, float z);
void multiplyMM(float* result, int resultOffset,float* lhs, int lhsOffset, float* rhs, int rhsOffset);
void multiplyMV(float* resultVec,int resultVecOffset, float* lhsMat, int lhsMatOffset,float* rhsVec, int rhsVecOffset);
void translateM(float* tm, int tmOffset,float* m, int mOffset,float x, float y, float z);

void translateMValue( float* m, int mOffset,float x, float y, float z);

void rotateMValue(float* m, int mOffset,float a, float x, float y, float z);
void setLookAtM(float* rm, int rmOffset,
                float eyeX, float eyeY, float eyeZ,
                float centerX, float centerY, float centerZ, float upX, float upY,
                float upZ);
void frustumM(float* m, int offset,
              float left, float right, float bottom, float top,
              float near, float far);

void getRotationMatrixFromVector(float* R, int Rsize,float* rotationVector,int rotationVectorSize);
int remapCoordinateSystem(float* inR, int inRlength,int X, int Y,float* outR,int outRlength);

#endif
