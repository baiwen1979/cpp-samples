
typedef float (*F) (float);  //f(x)函数类型定义

/* *
 * 测试牛顿迭代法求方程f(x)=0根的误差
 * @param f  {F} 指向f(x)函数的指针
 * @param df {F} 指向f(x)导函数的指针
 * @param x0 {float} 初始x0的值，可以为任何(最好选一个比实际根大的，以更容易观察迭代过程)浮点数
 * @param iterCount {int} 迭代次数
 * @param realRoot {float} f(x)=0的实际根
 * @return {float} 方程f(x)=0的根
 */
void testNewtonIteration(F f, F df, float x0, float realRoot, int iterCount);
