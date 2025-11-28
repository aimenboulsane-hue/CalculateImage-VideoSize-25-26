#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
      float size=(float)(w*h);
       float sizeKo = sizeBytes / 1024.0f;


   // YOUR CODE HERE - END
   return sizeKo;
}
