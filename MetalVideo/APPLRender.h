//
//  APPLRender.h
//  MetalVertex
//
//  Created by cfq on 2016/10/24.
//  Copyright © 2016年 Dlodlo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APPLView.h"
#import <Metal/Metal.h>
#import <IJKMediaFramework/IJKMediaFramework.h>

@interface APPLRender : NSObject<APPLViewDelegate>

@property (atomic, retain) id<IJKMediaPlayback> player;
// load all assets before triggering rendering
- (void)configure:(APPLView *)view;
@property (nonatomic, strong)  id<MTLBuffer> parametersBuffer;
@property (nonatomic, strong) CAMetalLayer *layer;

@end
