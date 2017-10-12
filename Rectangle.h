//interface
namespace geometry {
    class Rectangle {
    public:

        Rectangle(float w, float h);
        float getHeight();
        float getWidth();
        float getArea();
    private:
        float width, height;
    };
}