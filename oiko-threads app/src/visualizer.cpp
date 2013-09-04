/*
  part of Oikonomic Threads project
  coded by Marinos Koutsomichalis (c) 2013, Heraklion
*/

#include "visualizer.h"

// ============================= Constructors ===========================
Visualizer::Visualizer() :
  mStillsIndex(0),
  mWidth(settings::width * 3),
  mHeight(settings::width * 3),
  mLineHeight(1),
  mImage(cv::Mat(mHeight, mWidth, CV_8UC1,cv::Scalar(0)))
{
  cv::namedWindow( "Oiko-nomic Threads: Display window");
}

Visualizer::Visualizer(const unsigned int mWidth_, const unsigned int mHeight_) :
  mStillsIndex(0),
  mWidth(mWidth_),
  mHeight(mHeight_),
  mLineHeight(static_cast<unsigned int>(mHeight * static_cast<double>(mWidth) / static_cast<double>(settings::width))),
  mImage(cv::Mat(mHeight, mWidth, CV_8UC1,cv::Scalar(0)))
{
  cv::namedWindow( "Oiko-nomic Threads: Display window");
}

// ============================= Dtor ============================== 
Visualizer::~Visualizer() {
  cv::destroyAllWindows();
}

// ============================= animate ============================== 
void Visualizer::animate(const cv::Mat &mat) { 

  // copy and resize matrix
  cv::Mat matrix;
  mat.copyTo(matrix);
  cv::resize(matrix,matrix,cv::Size( mWidth, mLineHeight));

  // std::cout << mImage.rows << " " << mHeight << " " << resizeFactor << std::endl;

  // delete first mLineHeight lines

  // pushback line
  mImage.push_back(matrix);

  // update display
  cv::imshow( "Oiko-nomic Threads: Display window", mImage );
}

// ============================= still ============================== 
void Visualizer::still(Pattern &pattern, int lines) {
  cv::Mat mat(lines, settings::width, CV_8UC3, cv::Scalar(255,0,0));

  for (int i=0; i<=lines; i++) {
    cv::Mat line = pattern.nextLine();
    for (int j = 0; j < line.cols; j++) {
      mat.at<cv::Vec3b>(i, j)[2] = line.at<uchar>(0,j);
    }
  }
  
  // resize
  cv::resize(mat,mat,cv::Size(0,0),3,3);
  
  // display and wait for key
  cv::imshow( "Oiko-nomic Threads: Display window", mat );
  cv::waitKey(0);  
}

// ============================= exportStill ============================== 
void Visualizer::exportStill(Pattern &pattern, int lines) {
  cv::Mat mat(lines, settings::width, CV_8UC3, cv::Scalar(0,0,255));
  for (int i=0; i<=lines; i++) {
    cv::Mat line = pattern.nextLine();
    for (int j = 0; j < line.cols; j++) {
      mat.at<cv::Vec3b>(i, j)[1] = line.at<uchar>(0,j);
    }
  }
  
  // save
  std::string date = getCurrentDate();
  std::string index = boost::lexical_cast<std::string>(mStillsIndex);
  std::string path = "stills/still " ;
  path.append(date);
  path.append(index);
  path.append(".tiff");
  cv::imwrite(path, mat);

  mStillsIndex++;
}

// ============================= test ============================== 
void Visualizer::test(cv::Mat image) {
  cv::namedWindow( "Test");
  cv::imshow( "Test", image);
  cv::waitKey(0);  
}

// ============================= getCurrentDate ============================== 
std::string Visualizer::getCurrentDate() {
  time_t t;
  time(&t);
  std::string ts = boost::lexical_cast<std::string>(t);
  return ts;
}
