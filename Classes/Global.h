#ifndef GLOBAL_H_
#define GLOBAL_H_

#include "Bullet.h"

USING_NS_CC;

class Global
{
public:
    Global();
    ~Global();
    static int turn;
    static std::list<Bullet*> bullets;
	static bool winSide; // 0 ����ʤ�� 1 �Ƴ�ʤ
	static bool isGameover;
};

#endif
