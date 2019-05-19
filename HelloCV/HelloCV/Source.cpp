#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	//create image
	Mat img(200, 500, CV_8UC3, Scalar(0, 255, 0));

	//output text
	std::string text = "Hello CV";
	int fontFace = 7;
	double fontScale = 3;
	int thickness = 3;
	int baseline;
	Size textSize = getTextSize(text, fontFace, fontScale, thickness, &baseline);

	//set text position
	Point pos;
	pos.x = img.cols / 2 - textSize.width / 2;
	pos.y = img.rows / 2 + textSize.height / 2;
	putText(img, text, pos, fontFace, fontScale, Scalar(255), thickness);


	namedWindow("Hello CV", WINDOW_AUTOSIZE);
	imshow("Hello CV", img);
	waitKey(0);
	destroyAllWindows();
	return 0;
}