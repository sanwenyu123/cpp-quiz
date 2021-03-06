/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

【计算多个整数的最大值】
输入
  输入一些数量未知的整数，遇到输入的整数是-1的情况表示输入结束。

输出
  计算这些整数的最大值，但最后的整数-1不算在内。

示例
  输入：
	1 2 3 4 5 -1
  输出：
	5
*/

#ifndef __A032__
#define __A032__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A032"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "计算多个整数的最大值") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int max;
		//	std::cin >> max;
		//	while (true) {
		//		int number;
		//		std::cin >> number;
		//		if (number == -1) break;
		//		if (max < number) {
		//			max = number;
		//		}
		//	}
		//	std::cout << max;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
