/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic outline for a simple desktop window.

  ==============================================================================
*/

#ifndef __MAINWINDOW_H_1B128B20__
#define __MAINWINDOW_H_1B128B20__

#include "../JuceLibraryCode/JuceHeader.h"
#include "WindowComponent.h"

//==============================================================================
class MainAppWindow   : public DocumentWindow
{
public:
    //==============================================================================
    MainAppWindow();
    ~MainAppWindow();

    void closeButtonPressed();


    /* Note: Be careful when overriding DocumentWindow methods - the base class
       uses a lot of them, so by overriding you might break its functionality.
       It's best to do all your work in you content component instead, but if
       you really have to override any DocumentWindow methods, make sure your
       implementation calls the superclass's method.
    */

private:
    ScopedPointer<WindowComponent> windowComp;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainAppWindow)
};


#endif  // __MAINWINDOW_H_1B128B20__
