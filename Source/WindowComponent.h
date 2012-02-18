/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  18 Feb 2012 12:35:30pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_88D60227__
#define __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_88D60227__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]

class ColourEditorComponent;

//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class WindowComponent  : public Component,
                         public ComboBoxListener,
                         public SliderListener,
                         public ButtonListener
{
public:
    //==============================================================================
    WindowComponent ();
    ~WindowComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    GroupComponent* grpTextLayoutEditor;
    GroupComponent* grpLayout;
    Label* lblWordWrap;
    Label* lblReadingDirection;
    Label* lblJustification;
    Label* lblLineSpacing;
    ComboBox* cmbWordWrap;
    ComboBox* cmbReadingDirection;
    ComboBox* cmbJustification;
    Slider* slLineSpacing;
    GroupComponent* grpFont;
    Label* lblFontFamily;
    Label* lblFontStyle;
    ToggleButton* tbUnderlined;
    ToggleButton* tbStrikethrough;
    ComboBox* cmbFontFamily;
    ComboBox* cmbFontStyle;
    GroupComponent* grpColor;
    ColourEditorComponent* ceColor;
    Label* lblColor;
    GroupComponent* grpDbgCaret;
    Label* lblCaretPos;
    Slider* slCaretPos;
    Label* lblCaretSelStart;
    Slider* slCaretSelStart;
    Slider* slCaretSelEnd;
    Label* lblCaretSelEnd;
    GroupComponent* grpDbgRanges;
    TextEditor* txtDbgRanges;
    TextEditor* txtEditor;
    TextButton* tbDbgRanges;
    Slider* slFontSize;
    Label* lblFontSize;
    GroupComponent* grpDbgActions;
    TextButton* tbR1C1;
    TextButton* tbR2C1;
    TextButton* tbR3C1;
    TextButton* tbR4C1;
    TextButton* tbR1C2;
    TextButton* tbR2C2;
    TextButton* tbR3C2;
    TextButton* tbR4C2;
    TextButton* tbR1C3;
    TextButton* tbR2C3;
    TextButton* tbR3C3;
    TextButton* tbR4C7;
    TextButton* tbR1C4;
    TextButton* tbR1C5;
    TextButton* tbR2C4;
    TextButton* tbR3C4;
    TextButton* tbR4C8;
    TextButton* tbR2C5;
    TextButton* tbR3C5;
    TextButton* tbR4C9;
    TextButton* tbR5C1;
    TextButton* tbR5C2;
    TextButton* tbR5C3;
    TextButton* tbR5C4;
    TextButton* tbR5C5;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    WindowComponent (const WindowComponent&);
    const WindowComponent& operator= (const WindowComponent&);
};


#endif   // __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_88D60227__
