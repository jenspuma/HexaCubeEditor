/*
  ==============================================================================

    Matrix.h
    Created: 31 Mar 2015 8:36:53pm
    Author:  Jens

  ==============================================================================
*/

#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class Matrix    : public Component
{
public:
    Matrix();
    ~Matrix();

    void paint (Graphics&);
    void resized();
    void mouseUp (const MouseEvent& event);

private:
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Matrix)

  Rectangle<int>  m_buttonRect[16];
  int             m_nSel;
};


#endif  // MATRIX_H_INCLUDED
