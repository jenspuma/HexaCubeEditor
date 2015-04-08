/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
  addAndMakeVisible(m_Matrix);
  addAndMakeVisible(m_FuncitonCombo);

  setSize (375, 667);
}

MainContentComponent::~MainContentComponent()
{
} 

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (findColour(ResizableWindow::backgroundColourId));

}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

  int spacer = (int)(0.05 * getWidth());
  int w      = (int)(0.9 * getWidth());

  m_Matrix.setBounds(spacer, spacer, w, w);

  m_FuncitonCombo.setBounds(spacer, m_Matrix.getBottom() + 2*spacer, w, 22);
}
