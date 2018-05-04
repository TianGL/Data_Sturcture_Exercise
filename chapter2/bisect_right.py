##二分查找python

def bisect_right(a, x, lo=0, hi=None):  # 在有序向量匙间a[lo, hi)中，采用二分策略查找x 
    if hi is None:                      # hi未予明确指定时，默讣值取作 
        hi = len(a)                     # a的长度,因lo默认为0，默认对整个向量查找
    while lo < hi:                      # 没步迭代仅需做一次比较判断，有两个分支 
        mid = (lo+hi)//2                # 以中点为轴点 
		if x < a[mid]: hi = mid         # 经一比较后，若x小于轴点，则向左深入[lo, mi) 
		else: lo = mid + 1              # 否则向右深入(mi, hi) 
	return lo                           # lo为x在a[lo, hi)中适当的插入位置 
