/*
 * STL vector容器测试
 * Geliang Tian, tglasd@163.com,gltian@bit.edu.cn
 * Copyright (c) 2017. All right reserved.
 * Reference: http://www.cplusplus.com/reference/vector/vector/
 */
#include <iostream>
#include "vector"//头文件
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    //声明及初始化
    vector<int> vec; //声明一个int向量
    vector<int> vec0(5); //声明一个初始大小为5的int向量
    vector<int> vec(10, 1); //声明一个初始大小为10且值都是1的向量
    vector<int> vec(temp); //声明并用temp向量初始化vec向量
    vector<int> temp(vec.begin(), vec.begin() + 3); //用向量vec的第0个到第2个值初始化
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vec(arr, arr + 5); //将arr数组的值用于初始化vec向量
    //说明：当然不包括arr[4]元素，末尾指针都是指结束元素的下一个元素，
    //这个主要是为了和vec.end()指针统一。
    vector<int> vec(&arr[1], &arr[4]); //将arr[1]~arr[4]范围内的元素作为vec的初始值

    vector<int>:: iterator it;
    it = vec.begin();
    //容量
    vec.size(); //向量大小
    vec.max_size(); //向量最大容量
    vec.resize(5); //更改向量大小
    vec.capacity(); //向量真实大小
    vec.empty(); //向量判空
    vec.shrink_to_fit(); //减少向量元素到满足元素所占储存空间

    //修改
    vec.assign(arr, arr+5); //多个元素复制，类似数组赋值初始化
    vec.push_back(0); //末尾添加元素
    vec.pop_back(); //末尾删除元素
    vec.insert(it,5); //在任意位置插入元素及
    vec.erase(it); //任意位置删除元素
    vec.swap(vec0); //交换两个向量的元素
    vec.clear(); //清空向量元素

    //迭代器
    vec.begin(); //开始指针
    vec.end(); //指向最后一个元素的下一个位置
    vec.cbegin(); //指向常量的开始指针，不可以通过这个指针来修改所指内容
    vec.cend(); //指向常量末尾指针

    //元素访问
    vec[1]; //不会检查是否越界
    vec.at(1); //会检测越界
    vec.front(); //访问第一个元素
    vec.back(); //访问最后一个元素

    int *p = vec.data();//返回一个指向这个向量的指针
    return 0;
}