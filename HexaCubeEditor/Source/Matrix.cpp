/*
  ==============================================================================

    Matrix.cpp
    Created: 31 Mar 2015 8:36:53pm
    Author:  Jens

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Matrix.h"

//==============================================================================
Matrix::Matrix()
: m_nSel(0)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

Matrix::~Matrix()
{
}

void Matrix::paint (Graphics& g)
{
  g.fillAll(Colours::darkgrey.darker(3.f));

  g.setColour (Colours::orange);
  g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

  for (int i = 0; i < 16; i++)
  {
    g.drawRect(m_buttonRect[i], 1);
    if (m_nSel == i)
      g.fillRect(m_buttonRect[i].toFloat());
  }
}

void Matrix::resized()
{
  for (int i = 0; i < 16; i++)
  {
    int col = i & 0x03;
    int row = i >> 2;

    int x = (int)((0.08 + col*(0.22))*getWidth());
    int y = (int)((0.08 + row*(0.22))*getHeight());

    m_buttonRect[i].setBounds(x, y, (int)(0.18*getWidth()), (int)(0.18*getHeight()));
  }
}

void Matrix::mouseUp(const MouseEvent& event)
{
  Point<int> p = event.getMouseDownPosition();

  for (int i = 0; i < 16; i++)
  {
    if (m_buttonRect[i].contains(p))
    {
      m_nSel = i;
      repaint();
      break;
    }
  }
}