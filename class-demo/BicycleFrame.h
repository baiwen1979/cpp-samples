#ifndef BICYCLE_FRAME_H
#define BICYCLE_FRAME_H

class BicycleFrame {
public:
    BicycleFrame();
    BicycleFrame(int len);
    BicycleFrame(const BicycleFrame& b);

    int getLength();

    ~BicycleFrame();
private:
    int length;
};

#endif
