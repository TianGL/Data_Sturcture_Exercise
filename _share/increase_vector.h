/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#include "..\vector\vector.h"

template <typename T> void increase ( Vector<T> & V ) //统一递增向量中的各元素
{  V.traverse ( Increase<T>() );  } //以Increase<T>()为基本操作进行遍历