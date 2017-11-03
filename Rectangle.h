//interface
namespace geometry {
    class Rectangle {
    public:
        //默认构造函数
        Rectangle();

        //带参数的构造函数
        Rectangle(int w, int h);

        //拷贝构造函数
        Rectangle(const Rectangle& r);
        /**
         * 返回矩形的高度
         * @param 无
         * @return {int} 高度
         */
        int getHeight();

        /**
         * 返回矩形的宽度
         * @param 无
         * @return {int} 宽度
         */
        int getWidth();

        /**
         * 设置矩形的高度
         * @param h {int} 高度值
         * @return {void} 无
         */
        Rectangle& setHeight(int h);

        /**
         * 设置矩形的宽度
         * @param h {int} 宽度值
         * @return {void} 无
         */
        Rectangle& setWidth(int w);

        /**
         * 获取矩形的面积
         * @param h {int} 矩形面积
         * @return {int} 面积
         */
        int getArea();

        /**
         * 输出矩形的几何形状
         * @param c {char} 填充颜色
         * @return {void} 无
         */
        void printShape(char c);

        ~Rectangle();
    private:
        int width, height;
    };
}