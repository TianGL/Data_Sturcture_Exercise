/********************************************************************************************************************
 * Created by Geliang Tian on 2018/3/3. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *********************************************************************************************************************/

#ifndef LABY_ADVANCE_H
#define LABY_ADVANCE_H

inline Cell* advance ( Cell* cell ) { //从当前位置转入相邻格点
    Cell* next;
    switch ( cell->outgoing ) {
        case EAST:  next = cell + LABY_MAX; next->incoming = WEST;  break; //向东
        case SOUTH: next = cell + 1;        next->incoming = NORTH; break; //向南
        case WEST:  next = cell - LABY_MAX; next->incoming = EAST;  break; //向西
        case NORTH: next = cell - 1;        next->incoming = SOUTH; break; //向北
        default : exit ( -1 );
    }
    return next;
}

#endif //LABY_ADVANCE_H
