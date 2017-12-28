//
// Creat by Geliang Tian 2017/11/24
/*Hailstone ����*/
//

template <typename T> struct Hailstone {

	virtual void operator()(T& e){
		int setp = 0;
		while (1 != e) {
			(e % 2) ? e = 3 * e + 1 : e /= 2;
			setp++;
		}
		e = setp; //�����������Ĳ���
	}
};
