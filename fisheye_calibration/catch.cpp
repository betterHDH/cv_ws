#include<opencv2/highgui.hpp>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

int main()
{
    unsigned char i;
    int j=0;
    std::string img,jpg,name,number;
    cv::VideoCapture capture(0);
    cv::Mat frame;
    img = "img";
    jpg = ".jpg";
    while(1)
    {
        capture>>frame;
        cv::imshow("1",frame);
        i=cv::waitKey(30);
        // std::cout<<i<<std::endl;
        if (i == 'f') 
        {
            std::stringstream num;
            j++;
            num<<j;
            (num)>>number;
            std::cout<<j<<std::endl;
            cv::imwrite(img+number+jpg, frame);
            std::cout<<img+number+jpg<<std::endl;

        }
    }
    return 0;
}