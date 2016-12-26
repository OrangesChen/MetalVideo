//
//  DVR_player.h
//  libplayerproject
//
//  Created by xiaoliumac on 16/6/5.
//  Copyright © 2016年 dlodlo. All rights reserved.
//

#ifndef DVR_player_h
#define DVR_player_h

#include <stdio.h>
extern "C"
{
int player_render_plane_init(int isReverse,int type,int textureType,int glversion,void* render);
int player_render_plane_destory(void *render);
int player_render_plane_draw(int eye,int* textureId,void *render);
void* player_render_plane_get_render();

int player_render_panorama_init(int isReverse,int type,int textureType,int glversion,void* render);
int player_render_panorama_destory(void *render);
int player_render_panorama_draw(int eye,int* textureId,void *render);
int player_render_panorama_set_matrix(float* matrix ,void *render);
int player_render_panorama_set_data(int stacks,int slices,float redius,void *render);
void* player_render_panorama_get_render();

void player_render_set_vbt(int vbt);

}
#endif /* DVR_player_h */
