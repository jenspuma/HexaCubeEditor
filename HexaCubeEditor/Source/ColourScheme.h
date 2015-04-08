/*
  ==============================================================================

    ColourScheme.h
    Created: 15 Nov 2012 9:33:16am
    Author:  jebro

  ==============================================================================
*/

#ifndef __COLOURSCHEME_H_C88AB32D__
#define __COLOURSCHEME_H_C88AB32D__

#include "../JuceLibraryCode/JuceHeader.h"

class ColourScheme
{
private:

  struct ColourDef
  {
    uint32 id;
    Colour colour;
  };

public:

  enum
  {
    defaultHighlightColour = 0x100b000
  };

  static void applyColourScheme(LookAndFeel& pLookAndFeel)
  { 
    Colour btnClr = Colours::orange;
    Colour bgClr  = Colours::darkgrey.darker(3.f);

    static const ColourDef standardColours[] =
    {
      { TextButton::buttonColourId,               btnClr              },
      { TextButton::buttonOnColourId,             btnClr.darker()     },

      { TextEditor::highlightColourId,            btnClr.brighter()   },
      { TextEditor::focusedOutlineColourId,       btnClr              },
      { ResizableWindow::backgroundColourId,      bgClr               },

      { PopupMenu::highlightedBackgroundColourId, btnClr.darker()     },

      { ColourScheme::defaultHighlightColour,     Colours::orange     },

    };

    for (int i = 0; i < numElementsInArray (standardColours); i ++)
      pLookAndFeel.setColour ((int) standardColours[i].id, standardColours [i].colour);

  };

};


#endif  // __COLOURSCHEME_H_C88AB32D__
