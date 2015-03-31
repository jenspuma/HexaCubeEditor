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

  setSize (375, 667);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colours::darkgrey.darker(3.f));

}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

  m_Matrix.setBounds(0.05 * getWidth(), 0.05 * getWidth(), 0.9 * getWidth(), 0.9 * getWidth());
}
