/* ========================================================================
 * PROJECT: windage Library
 * ========================================================================
 * This work is based on the original windage Library developed by
 *   Woonhyuk Baek
 *   Woontack Woo
 *   U-VR Lab, GIST of Gwangju in Korea.
 *   http://windage.googlecode.com/
 *   http://uvr.gist.ac.kr/
 *
 * Copyright of the derived and new portions of this work
 *     (C) 2009 GIST U-VR Lab.
 *
 * This framework is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This framework is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this framework; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * For further information please contact 
 *   Woonhyuk Baek
 *   <windage@live.com>
 *   GIST U-VR Lab.
 *   Department of Information and Communication
 *   Gwangju Institute of Science and Technology
 *   1, Oryong-dong, Buk-gu, Gwangju
 *   South Korea
 * ========================================================================
 ** @author   Woonhyuk Baek
 * ======================================================================== */

#ifndef OPENGL_RENDERER_H
#define OPENGL_RENDERER_H

#include <GL/glut.h>
#include <cv.h>

#include "Utils/wVector.h"
using namespace windage;

//#define DRAWPIXEL_MODE

class OpenGLRenderer
{
public:
	static void init(int width = 320, int height = 240);
//	static void idle();
//	static void display();

	static void setLight();
	static void setMaterial(Vector4 color);

	static void drawClear();
	static void drawBackground(IplImage* inputImage);
	static void drawObject(GLfloat* projection, GLfloat* model_view, int markerId, double markerWidth);

	static void mouse(int iButton, int iState, int x, int y);
	static void motion(int x, int y);

	static int cursorX;
	static int cursorY;

	enum MODE{RENDER=1, CLICKED=2};
	static MODE mode;

private:
	static int windowWidth;
	static int windowHeight;

	static int cameraWidth;
	static int cameraHeight;
};

#endif