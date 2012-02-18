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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "WindowComponent.h"
#include "ColourEditorComponent.h"

//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
WindowComponent::WindowComponent ()
    : grpTextLayoutEditor (0),
      grpLayout (0),
      lblWordWrap (0),
      lblReadingDirection (0),
      lblJustification (0),
      lblLineSpacing (0),
      cmbWordWrap (0),
      cmbReadingDirection (0),
      cmbJustification (0),
      slLineSpacing (0),
      grpFont (0),
      lblFontFamily (0),
      lblFontStyle (0),
      tbUnderlined (0),
      tbStrikethrough (0),
      cmbFontFamily (0),
      cmbFontStyle (0),
      grpColor (0),
      ceColor (0),
      lblColor (0),
      grpDbgCaret (0),
      lblCaretPos (0),
      slCaretPos (0),
      lblCaretSelStart (0),
      slCaretSelStart (0),
      slCaretSelEnd (0),
      lblCaretSelEnd (0),
      grpDbgRanges (0),
      txtDbgRanges (0),
      txtEditor (0),
      tbDbgRanges (0),
      slFontSize (0),
      lblFontSize (0),
      grpDbgActions (0),
      tbR1C1 (0),
      tbR2C1 (0),
      tbR3C1 (0),
      tbR4C1 (0),
      tbR1C2 (0),
      tbR2C2 (0),
      tbR3C2 (0),
      tbR4C2 (0),
      tbR1C3 (0),
      tbR2C3 (0),
      tbR3C3 (0),
      tbR4C7 (0),
      tbR1C4 (0),
      tbR1C5 (0),
      tbR2C4 (0),
      tbR3C4 (0),
      tbR4C8 (0),
      tbR2C5 (0),
      tbR3C5 (0),
      tbR4C9 (0),
      tbR5C1 (0),
      tbR5C2 (0),
      tbR5C3 (0),
      tbR5C4 (0),
      tbR5C5 (0)
{
    addAndMakeVisible (grpTextLayoutEditor = new GroupComponent (L"grpTextLayoutEditor",
                                                                 L"Text Layout Editor"));

    addAndMakeVisible (grpLayout = new GroupComponent (L"grpLayout",
                                                       L"Layout"));

    addAndMakeVisible (lblWordWrap = new Label (L"lblWordWrap",
                                                L"Word Wrap:"));
    lblWordWrap->setFont (Font (15.0000f));
    lblWordWrap->setJustificationType (Justification::centredLeft);
    lblWordWrap->setEditable (false, false, false);
    lblWordWrap->setColour (TextEditor::textColourId, Colours::black);
    lblWordWrap->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblReadingDirection = new Label (L"lblReadingDirection",
                                                        L"Reading Direction:"));
    lblReadingDirection->setFont (Font (15.0000f));
    lblReadingDirection->setJustificationType (Justification::centredLeft);
    lblReadingDirection->setEditable (false, false, false);
    lblReadingDirection->setColour (TextEditor::textColourId, Colours::black);
    lblReadingDirection->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblJustification = new Label (L"lblJustification",
                                                     L"Justification:"));
    lblJustification->setFont (Font (15.0000f));
    lblJustification->setJustificationType (Justification::centredLeft);
    lblJustification->setEditable (false, false, false);
    lblJustification->setColour (TextEditor::textColourId, Colours::black);
    lblJustification->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblLineSpacing = new Label (L"lblLineSpacing",
                                                   L"Line Spacing:"));
    lblLineSpacing->setFont (Font (15.0000f));
    lblLineSpacing->setJustificationType (Justification::centredLeft);
    lblLineSpacing->setEditable (false, false, false);
    lblLineSpacing->setColour (TextEditor::textColourId, Colours::black);
    lblLineSpacing->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (cmbWordWrap = new ComboBox (L"cmbWordWrap"));
    cmbWordWrap->setEditableText (false);
    cmbWordWrap->setJustificationType (Justification::centredLeft);
    cmbWordWrap->setTextWhenNothingSelected (String::empty);
    cmbWordWrap->setTextWhenNoChoicesAvailable (L"(no choices)");
    cmbWordWrap->addItem (L"None", 1);
    cmbWordWrap->addItem (L"By Word", 2);
    cmbWordWrap->addItem (L"By Character", 3);
    cmbWordWrap->addListener (this);

    addAndMakeVisible (cmbReadingDirection = new ComboBox (L"cmbReadingDirection"));
    cmbReadingDirection->setEditableText (false);
    cmbReadingDirection->setJustificationType (Justification::centredLeft);
    cmbReadingDirection->setTextWhenNothingSelected (String::empty);
    cmbReadingDirection->setTextWhenNoChoicesAvailable (L"(no choices)");
    cmbReadingDirection->addItem (L"Natural", 1);
    cmbReadingDirection->addItem (L"Left to Right", 2);
    cmbReadingDirection->addItem (L"Right to Left", 3);
    cmbReadingDirection->addListener (this);

    addAndMakeVisible (cmbJustification = new ComboBox (L"cmbJustification"));
    cmbJustification->setEditableText (false);
    cmbJustification->setJustificationType (Justification::centredLeft);
    cmbJustification->setTextWhenNothingSelected (String::empty);
    cmbJustification->setTextWhenNoChoicesAvailable (L"(no choices)");
    cmbJustification->addItem (L"Left", 1);
    cmbJustification->addItem (L"Right", 2);
    cmbJustification->addItem (L"Centered", 3);
    cmbJustification->addItem (L"Justified", 4);
    cmbJustification->addListener (this);

    addAndMakeVisible (slLineSpacing = new Slider (L"slLineSpacing"));
    slLineSpacing->setRange (0, 10, 0.01);
    slLineSpacing->setSliderStyle (Slider::IncDecButtons);
    slLineSpacing->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slLineSpacing->addListener (this);

    addAndMakeVisible (grpFont = new GroupComponent (L"grpFont",
                                                     L"Font"));

    addAndMakeVisible (lblFontFamily = new Label (L"lblFontFamily",
                                                  L"Font Family:"));
    lblFontFamily->setFont (Font (15.0000f));
    lblFontFamily->setJustificationType (Justification::centredLeft);
    lblFontFamily->setEditable (false, false, false);
    lblFontFamily->setColour (TextEditor::textColourId, Colours::black);
    lblFontFamily->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblFontStyle = new Label (L"lblFontStyle",
                                                 L"Font Style:"));
    lblFontStyle->setFont (Font (15.0000f));
    lblFontStyle->setJustificationType (Justification::centredLeft);
    lblFontStyle->setEditable (false, false, false);
    lblFontStyle->setColour (TextEditor::textColourId, Colours::black);
    lblFontStyle->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (tbUnderlined = new ToggleButton (L"new toggle button"));
    tbUnderlined->setButtonText (L"Underlined");
    tbUnderlined->addListener (this);

    addAndMakeVisible (tbStrikethrough = new ToggleButton (L"new toggle button"));
    tbStrikethrough->setButtonText (L"Strikethrough");
    tbStrikethrough->addListener (this);

    addAndMakeVisible (cmbFontFamily = new ComboBox (L"cmbFontFamily"));
    cmbFontFamily->setEditableText (false);
    cmbFontFamily->setJustificationType (Justification::centredLeft);
    cmbFontFamily->setTextWhenNothingSelected (String::empty);
    cmbFontFamily->setTextWhenNoChoicesAvailable (L"(no choices)");
    cmbFontFamily->addListener (this);

    addAndMakeVisible (cmbFontStyle = new ComboBox (L"cmbFontStyle"));
    cmbFontStyle->setEditableText (false);
    cmbFontStyle->setJustificationType (Justification::centredLeft);
    cmbFontStyle->setTextWhenNothingSelected (String::empty);
    cmbFontStyle->setTextWhenNoChoicesAvailable (L"(no choices)");
    cmbFontStyle->addListener (this);

    addAndMakeVisible (grpColor = new GroupComponent (L"grpColor",
                                                      L"Color"));

    addAndMakeVisible (ceColor = new ColourEditorComponent(false));
    ceColor->setName (L"ceColor");

    addAndMakeVisible (lblColor = new Label (L"lblColor",
                                             L"Color:"));
    lblColor->setFont (Font (15.0000f));
    lblColor->setJustificationType (Justification::centredLeft);
    lblColor->setEditable (false, false, false);
    lblColor->setColour (TextEditor::textColourId, Colours::black);
    lblColor->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (grpDbgCaret = new GroupComponent (L"grpDbgCaret",
                                                         L"Debug Caret"));

    addAndMakeVisible (lblCaretPos = new Label (L"lblCaretPos",
                                                L"Caret Position"));
    lblCaretPos->setFont (Font (15.0000f));
    lblCaretPos->setJustificationType (Justification::centredLeft);
    lblCaretPos->setEditable (false, false, false);
    lblCaretPos->setColour (TextEditor::textColourId, Colours::black);
    lblCaretPos->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (slCaretPos = new Slider (L"slCaretPos"));
    slCaretPos->setRange (0, 1000000, 1);
    slCaretPos->setSliderStyle (Slider::IncDecButtons);
    slCaretPos->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slCaretPos->addListener (this);

    addAndMakeVisible (lblCaretSelStart = new Label (L"lblCaretSelStart",
                                                     L"Selection Start"));
    lblCaretSelStart->setFont (Font (15.0000f));
    lblCaretSelStart->setJustificationType (Justification::centredLeft);
    lblCaretSelStart->setEditable (false, false, false);
    lblCaretSelStart->setColour (TextEditor::textColourId, Colours::black);
    lblCaretSelStart->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (slCaretSelStart = new Slider (L"slCaretSelStart"));
    slCaretSelStart->setRange (0, 1000000, 1);
    slCaretSelStart->setSliderStyle (Slider::IncDecButtons);
    slCaretSelStart->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slCaretSelStart->addListener (this);

    addAndMakeVisible (slCaretSelEnd = new Slider (L"slCaretSelEnd"));
    slCaretSelEnd->setRange (0, 1000000, 1);
    slCaretSelEnd->setSliderStyle (Slider::IncDecButtons);
    slCaretSelEnd->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slCaretSelEnd->addListener (this);

    addAndMakeVisible (lblCaretSelEnd = new Label (L"lblCaretSelEnd",
                                                   L"Selection End"));
    lblCaretSelEnd->setFont (Font (15.0000f));
    lblCaretSelEnd->setJustificationType (Justification::centredLeft);
    lblCaretSelEnd->setEditable (false, false, false);
    lblCaretSelEnd->setColour (TextEditor::textColourId, Colours::black);
    lblCaretSelEnd->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (grpDbgRanges = new GroupComponent (L"grpDbgRanges",
                                                          L"Debug Ranges"));

    addAndMakeVisible (txtDbgRanges = new TextEditor (L"txtDbgRanges"));
    txtDbgRanges->setMultiLine (true);
    txtDbgRanges->setReturnKeyStartsNewLine (true);
    txtDbgRanges->setReadOnly (false);
    txtDbgRanges->setScrollbarsShown (true);
    txtDbgRanges->setCaretVisible (true);
    txtDbgRanges->setPopupMenuEnabled (true);
    txtDbgRanges->setText (String::empty);

    addAndMakeVisible (txtEditor = new TextEditor (L"txtEditor"));
    txtEditor->setMultiLine (true);
    txtEditor->setReturnKeyStartsNewLine (true);
    txtEditor->setReadOnly (false);
    txtEditor->setScrollbarsShown (true);
    txtEditor->setCaretVisible (true);
    txtEditor->setPopupMenuEnabled (true);
    txtEditor->setText (String::empty);

    addAndMakeVisible (tbDbgRanges = new TextButton (L"tbDbgRanges"));
    tbDbgRanges->setButtonText (L"Update");
    tbDbgRanges->addListener (this);

    addAndMakeVisible (slFontSize = new Slider (L"slFontSize"));
    slFontSize->setRange (0, 256, 0.0001);
    slFontSize->setSliderStyle (Slider::IncDecButtons);
    slFontSize->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slFontSize->addListener (this);

    addAndMakeVisible (lblFontSize = new Label (L"lblFontSize",
                                                L"Font Size:"));
    lblFontSize->setFont (Font (15.0000f));
    lblFontSize->setJustificationType (Justification::centredLeft);
    lblFontSize->setEditable (false, false, false);
    lblFontSize->setColour (TextEditor::textColourId, Colours::black);
    lblFontSize->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (grpDbgActions = new GroupComponent (L"grpDbgActions",
                                                           L"Debug Actions"));

    addAndMakeVisible (tbR1C1 = new TextButton (L"tbR1C1"));
    tbR1C1->addListener (this);

    addAndMakeVisible (tbR2C1 = new TextButton (L"tbR2C1"));
    tbR2C1->addListener (this);

    addAndMakeVisible (tbR3C1 = new TextButton (L"tbR3C1"));
    tbR3C1->addListener (this);

    addAndMakeVisible (tbR4C1 = new TextButton (L"tbR4C1"));
    tbR4C1->addListener (this);

    addAndMakeVisible (tbR1C2 = new TextButton (L"tbR1C2"));
    tbR1C2->addListener (this);

    addAndMakeVisible (tbR2C2 = new TextButton (L"tbR2C2"));
    tbR2C2->addListener (this);

    addAndMakeVisible (tbR3C2 = new TextButton (L"tbR3C2"));
    tbR3C2->addListener (this);

    addAndMakeVisible (tbR4C2 = new TextButton (L"tbR4C2"));
    tbR4C2->addListener (this);

    addAndMakeVisible (tbR1C3 = new TextButton (L"tbR1C3"));
    tbR1C3->addListener (this);

    addAndMakeVisible (tbR2C3 = new TextButton (L"tbR2C3"));
    tbR2C3->addListener (this);

    addAndMakeVisible (tbR3C3 = new TextButton (L"tbR3C3"));
    tbR3C3->addListener (this);

    addAndMakeVisible (tbR4C7 = new TextButton (L"tbR4C3"));
    tbR4C7->addListener (this);

    addAndMakeVisible (tbR1C4 = new TextButton (L"tbR1C4"));
    tbR1C4->addListener (this);

    addAndMakeVisible (tbR1C5 = new TextButton (L"tbR1C5"));
    tbR1C5->addListener (this);

    addAndMakeVisible (tbR2C4 = new TextButton (L"tbR2C4"));
    tbR2C4->addListener (this);

    addAndMakeVisible (tbR3C4 = new TextButton (L"tbR3C4"));
    tbR3C4->addListener (this);

    addAndMakeVisible (tbR4C8 = new TextButton (L"tbR4C4"));
    tbR4C8->addListener (this);

    addAndMakeVisible (tbR2C5 = new TextButton (L"tbR2C5"));
    tbR2C5->addListener (this);

    addAndMakeVisible (tbR3C5 = new TextButton (L"tbR3C5"));
    tbR3C5->addListener (this);

    addAndMakeVisible (tbR4C9 = new TextButton (L"tbR4C5"));
    tbR4C9->addListener (this);

    addAndMakeVisible (tbR5C1 = new TextButton (L"tbR5C1"));
    tbR5C1->addListener (this);

    addAndMakeVisible (tbR5C2 = new TextButton (L"tbR5C2"));
    tbR5C2->addListener (this);

    addAndMakeVisible (tbR5C3 = new TextButton (L"tbR5C3"));
    tbR5C3->addListener (this);

    addAndMakeVisible (tbR5C4 = new TextButton (L"tbR5C4"));
    tbR5C4->addListener (this);

    addAndMakeVisible (tbR5C5 = new TextButton (L"tbR5C5"));
    tbR5C5->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    cmbWordWrap->setText("None");
    cmbReadingDirection->setText("Natural");
    cmbJustification->setText("Left");
    cmbFontFamily->addItemList(Font::findAllTypefaceFamilies(), 1);
    cmbFontFamily->setText("Verdana");
    slFontSize->setValue(15.0000f);
    //[/Constructor]
}

WindowComponent::~WindowComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (grpTextLayoutEditor);
    deleteAndZero (grpLayout);
    deleteAndZero (lblWordWrap);
    deleteAndZero (lblReadingDirection);
    deleteAndZero (lblJustification);
    deleteAndZero (lblLineSpacing);
    deleteAndZero (cmbWordWrap);
    deleteAndZero (cmbReadingDirection);
    deleteAndZero (cmbJustification);
    deleteAndZero (slLineSpacing);
    deleteAndZero (grpFont);
    deleteAndZero (lblFontFamily);
    deleteAndZero (lblFontStyle);
    deleteAndZero (tbUnderlined);
    deleteAndZero (tbStrikethrough);
    deleteAndZero (cmbFontFamily);
    deleteAndZero (cmbFontStyle);
    deleteAndZero (grpColor);
    deleteAndZero (ceColor);
    deleteAndZero (lblColor);
    deleteAndZero (grpDbgCaret);
    deleteAndZero (lblCaretPos);
    deleteAndZero (slCaretPos);
    deleteAndZero (lblCaretSelStart);
    deleteAndZero (slCaretSelStart);
    deleteAndZero (slCaretSelEnd);
    deleteAndZero (lblCaretSelEnd);
    deleteAndZero (grpDbgRanges);
    deleteAndZero (txtDbgRanges);
    deleteAndZero (txtEditor);
    deleteAndZero (tbDbgRanges);
    deleteAndZero (slFontSize);
    deleteAndZero (lblFontSize);
    deleteAndZero (grpDbgActions);
    deleteAndZero (tbR1C1);
    deleteAndZero (tbR2C1);
    deleteAndZero (tbR3C1);
    deleteAndZero (tbR4C1);
    deleteAndZero (tbR1C2);
    deleteAndZero (tbR2C2);
    deleteAndZero (tbR3C2);
    deleteAndZero (tbR4C2);
    deleteAndZero (tbR1C3);
    deleteAndZero (tbR2C3);
    deleteAndZero (tbR3C3);
    deleteAndZero (tbR4C7);
    deleteAndZero (tbR1C4);
    deleteAndZero (tbR1C5);
    deleteAndZero (tbR2C4);
    deleteAndZero (tbR3C4);
    deleteAndZero (tbR4C8);
    deleteAndZero (tbR2C5);
    deleteAndZero (tbR3C5);
    deleteAndZero (tbR4C9);
    deleteAndZero (tbR5C1);
    deleteAndZero (tbR5C2);
    deleteAndZero (tbR5C3);
    deleteAndZero (tbR5C4);
    deleteAndZero (tbR5C5);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void WindowComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void WindowComponent::resized()
{
    grpTextLayoutEditor->setBounds (8, 0, 1024, 792);
    grpLayout->setBounds (24, 24, 320, 160);
    lblWordWrap->setBounds (32, 48, 128, 24);
    lblReadingDirection->setBounds (32, 80, 128, 24);
    lblJustification->setBounds (32, 112, 128, 24);
    lblLineSpacing->setBounds (32, 144, 128, 24);
    cmbWordWrap->setBounds (176, 48, 150, 24);
    cmbReadingDirection->setBounds (176, 80, 150, 24);
    cmbJustification->setBounds (176, 112, 150, 24);
    slLineSpacing->setBounds (176, 144, 150, 24);
    grpFont->setBounds (352, 24, 368, 160);
    lblFontFamily->setBounds (360, 48, 88, 24);
    lblFontStyle->setBounds (360, 80, 88, 24);
    tbUnderlined->setBounds (464, 152, 96, 24);
    tbStrikethrough->setBounds (592, 152, 112, 24);
    cmbFontFamily->setBounds (464, 48, 240, 24);
    cmbFontStyle->setBounds (464, 80, 240, 24);
    grpColor->setBounds (728, 24, 288, 64);
    ceColor->setBounds (848, 48, 152, 24);
    lblColor->setBounds (736, 48, 48, 24);
    grpDbgCaret->setBounds (728, 184, 288, 120);
    lblCaretPos->setBounds (736, 200, 150, 24);
    slCaretPos->setBounds (848, 200, 152, 24);
    lblCaretSelStart->setBounds (736, 232, 104, 24);
    slCaretSelStart->setBounds (848, 232, 152, 24);
    slCaretSelEnd->setBounds (848, 264, 152, 24);
    lblCaretSelEnd->setBounds (736, 264, 128, 24);
    grpDbgRanges->setBounds (24, 184, 696, 120);
    txtDbgRanges->setBounds (40, 208, 576, 80);
    txtEditor->setBounds (24, 504, 992, 272);
    tbDbgRanges->setBounds (624, 208, 86, 24);
    slFontSize->setBounds (464, 112, 150, 24);
    lblFontSize->setBounds (360, 112, 88, 24);
    grpDbgActions->setBounds (24, 304, 992, 192);
    tbR1C1->setBounds (40, 328, 184, 24);
    tbR2C1->setBounds (40, 360, 184, 24);
    tbR3C1->setBounds (40, 392, 184, 24);
    tbR4C1->setBounds (40, 424, 184, 24);
    tbR1C2->setBounds (240, 328, 184, 24);
    tbR2C2->setBounds (240, 360, 184, 24);
    tbR3C2->setBounds (240, 392, 184, 24);
    tbR4C2->setBounds (240, 424, 184, 24);
    tbR1C3->setBounds (432, 328, 184, 24);
    tbR2C3->setBounds (432, 360, 184, 24);
    tbR3C3->setBounds (432, 392, 184, 24);
    tbR4C7->setBounds (432, 424, 184, 24);
    tbR1C4->setBounds (624, 328, 184, 24);
    tbR1C5->setBounds (816, 328, 184, 24);
    tbR2C4->setBounds (624, 360, 184, 24);
    tbR3C4->setBounds (624, 392, 184, 24);
    tbR4C8->setBounds (624, 424, 184, 24);
    tbR2C5->setBounds (816, 360, 184, 24);
    tbR3C5->setBounds (816, 392, 184, 24);
    tbR4C9->setBounds (816, 424, 184, 24);
    tbR5C1->setBounds (40, 456, 184, 24);
    tbR5C2->setBounds (240, 456, 184, 24);
    tbR5C3->setBounds (432, 456, 184, 24);
    tbR5C4->setBounds (624, 456, 184, 24);
    tbR5C5->setBounds (816, 456, 184, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void WindowComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == cmbWordWrap)
    {
        //[UserComboBoxCode_cmbWordWrap] -- add your combo box handling code here..
        //[/UserComboBoxCode_cmbWordWrap]
    }
    else if (comboBoxThatHasChanged == cmbReadingDirection)
    {
        //[UserComboBoxCode_cmbReadingDirection] -- add your combo box handling code here..
        //[/UserComboBoxCode_cmbReadingDirection]
    }
    else if (comboBoxThatHasChanged == cmbJustification)
    {
        //[UserComboBoxCode_cmbJustification] -- add your combo box handling code here..
        //[/UserComboBoxCode_cmbJustification]
    }
    else if (comboBoxThatHasChanged == cmbFontFamily)
    {
        //[UserComboBoxCode_cmbFontFamily] -- add your combo box handling code here..
        cmbFontStyle->clear();
        cmbFontStyle->addItemList(Font::findAllTypefaceStyles(cmbFontFamily->getText()), 1);
        cmbFontStyle->setSelectedItemIndex(0);
        //[/UserComboBoxCode_cmbFontFamily]
    }
    else if (comboBoxThatHasChanged == cmbFontStyle)
    {
        //[UserComboBoxCode_cmbFontStyle] -- add your combo box handling code here..
        //[/UserComboBoxCode_cmbFontStyle]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void WindowComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slLineSpacing)
    {
        //[UserSliderCode_slLineSpacing] -- add your slider handling code here..
        //[/UserSliderCode_slLineSpacing]
    }
    else if (sliderThatWasMoved == slCaretPos)
    {
        //[UserSliderCode_slCaretPos] -- add your slider handling code here..
        //[/UserSliderCode_slCaretPos]
    }
    else if (sliderThatWasMoved == slCaretSelStart)
    {
        //[UserSliderCode_slCaretSelStart] -- add your slider handling code here..
        //[/UserSliderCode_slCaretSelStart]
    }
    else if (sliderThatWasMoved == slCaretSelEnd)
    {
        //[UserSliderCode_slCaretSelEnd] -- add your slider handling code here..
        //[/UserSliderCode_slCaretSelEnd]
    }
    else if (sliderThatWasMoved == slFontSize)
    {
        //[UserSliderCode_slFontSize] -- add your slider handling code here..
        //[/UserSliderCode_slFontSize]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void WindowComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == tbUnderlined)
    {
        //[UserButtonCode_tbUnderlined] -- add your button handler code here..
        //[/UserButtonCode_tbUnderlined]
    }
    else if (buttonThatWasClicked == tbStrikethrough)
    {
        //[UserButtonCode_tbStrikethrough] -- add your button handler code here..
        //[/UserButtonCode_tbStrikethrough]
    }
    else if (buttonThatWasClicked == tbDbgRanges)
    {
        //[UserButtonCode_tbDbgRanges] -- add your button handler code here..
        //[/UserButtonCode_tbDbgRanges]
    }
    else if (buttonThatWasClicked == tbR1C1)
    {
        //[UserButtonCode_tbR1C1] -- add your button handler code here..
        //[/UserButtonCode_tbR1C1]
    }
    else if (buttonThatWasClicked == tbR2C1)
    {
        //[UserButtonCode_tbR2C1] -- add your button handler code here..
        //[/UserButtonCode_tbR2C1]
    }
    else if (buttonThatWasClicked == tbR3C1)
    {
        //[UserButtonCode_tbR3C1] -- add your button handler code here..
        //[/UserButtonCode_tbR3C1]
    }
    else if (buttonThatWasClicked == tbR4C1)
    {
        //[UserButtonCode_tbR4C1] -- add your button handler code here..
        //[/UserButtonCode_tbR4C1]
    }
    else if (buttonThatWasClicked == tbR1C2)
    {
        //[UserButtonCode_tbR1C2] -- add your button handler code here..
        //[/UserButtonCode_tbR1C2]
    }
    else if (buttonThatWasClicked == tbR2C2)
    {
        //[UserButtonCode_tbR2C2] -- add your button handler code here..
        //[/UserButtonCode_tbR2C2]
    }
    else if (buttonThatWasClicked == tbR3C2)
    {
        //[UserButtonCode_tbR3C2] -- add your button handler code here..
        //[/UserButtonCode_tbR3C2]
    }
    else if (buttonThatWasClicked == tbR4C2)
    {
        //[UserButtonCode_tbR4C2] -- add your button handler code here..
        //[/UserButtonCode_tbR4C2]
    }
    else if (buttonThatWasClicked == tbR1C3)
    {
        //[UserButtonCode_tbR1C3] -- add your button handler code here..
        //[/UserButtonCode_tbR1C3]
    }
    else if (buttonThatWasClicked == tbR2C3)
    {
        //[UserButtonCode_tbR2C3] -- add your button handler code here..
        //[/UserButtonCode_tbR2C3]
    }
    else if (buttonThatWasClicked == tbR3C3)
    {
        //[UserButtonCode_tbR3C3] -- add your button handler code here..
        //[/UserButtonCode_tbR3C3]
    }
    else if (buttonThatWasClicked == tbR4C7)
    {
        //[UserButtonCode_tbR4C7] -- add your button handler code here..
        //[/UserButtonCode_tbR4C7]
    }
    else if (buttonThatWasClicked == tbR1C4)
    {
        //[UserButtonCode_tbR1C4] -- add your button handler code here..
        //[/UserButtonCode_tbR1C4]
    }
    else if (buttonThatWasClicked == tbR1C5)
    {
        //[UserButtonCode_tbR1C5] -- add your button handler code here..
        //[/UserButtonCode_tbR1C5]
    }
    else if (buttonThatWasClicked == tbR2C4)
    {
        //[UserButtonCode_tbR2C4] -- add your button handler code here..
        //[/UserButtonCode_tbR2C4]
    }
    else if (buttonThatWasClicked == tbR3C4)
    {
        //[UserButtonCode_tbR3C4] -- add your button handler code here..
        //[/UserButtonCode_tbR3C4]
    }
    else if (buttonThatWasClicked == tbR4C8)
    {
        //[UserButtonCode_tbR4C8] -- add your button handler code here..
        //[/UserButtonCode_tbR4C8]
    }
    else if (buttonThatWasClicked == tbR2C5)
    {
        //[UserButtonCode_tbR2C5] -- add your button handler code here..
        //[/UserButtonCode_tbR2C5]
    }
    else if (buttonThatWasClicked == tbR3C5)
    {
        //[UserButtonCode_tbR3C5] -- add your button handler code here..
        //[/UserButtonCode_tbR3C5]
    }
    else if (buttonThatWasClicked == tbR4C9)
    {
        //[UserButtonCode_tbR4C9] -- add your button handler code here..
        //[/UserButtonCode_tbR4C9]
    }
    else if (buttonThatWasClicked == tbR5C1)
    {
        //[UserButtonCode_tbR5C1] -- add your button handler code here..
        //[/UserButtonCode_tbR5C1]
    }
    else if (buttonThatWasClicked == tbR5C2)
    {
        //[UserButtonCode_tbR5C2] -- add your button handler code here..
        //[/UserButtonCode_tbR5C2]
    }
    else if (buttonThatWasClicked == tbR5C3)
    {
        //[UserButtonCode_tbR5C3] -- add your button handler code here..
        //[/UserButtonCode_tbR5C3]
    }
    else if (buttonThatWasClicked == tbR5C4)
    {
        //[UserButtonCode_tbR5C4] -- add your button handler code here..
        //[/UserButtonCode_tbR5C4]
    }
    else if (buttonThatWasClicked == tbR5C5)
    {
        //[UserButtonCode_tbR5C5] -- add your button handler code here..
        //[/UserButtonCode_tbR5C5]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="WindowComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GROUPCOMPONENT name="grpTextLayoutEditor" id="b68ae9c658c75314" memberName="grpTextLayoutEditor"
                  virtualName="" explicitFocusOrder="0" pos="8 0 1024 792" title="Text Layout Editor"/>
  <GROUPCOMPONENT name="grpLayout" id="d3ff859c85a320cd" memberName="grpLayout"
                  virtualName="" explicitFocusOrder="0" pos="24 24 320 160" title="Layout"/>
  <LABEL name="lblWordWrap" id="6b1573e1389ffb03" memberName="lblWordWrap"
         virtualName="" explicitFocusOrder="0" pos="32 48 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Word Wrap:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lblReadingDirection" id="62b860eb149bab7" memberName="lblReadingDirection"
         virtualName="" explicitFocusOrder="0" pos="32 80 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Reading Direction:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lblJustification" id="7acaa6327890daaa" memberName="lblJustification"
         virtualName="" explicitFocusOrder="0" pos="32 112 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Justification:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lblLineSpacing" id="1f1ec7fffe11b22b" memberName="lblLineSpacing"
         virtualName="" explicitFocusOrder="0" pos="32 144 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line Spacing:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="cmbWordWrap" id="31036756d8ef895d" memberName="cmbWordWrap"
            virtualName="" explicitFocusOrder="0" pos="176 48 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="cmbReadingDirection" id="8e60ff984659f976" memberName="cmbReadingDirection"
            virtualName="" explicitFocusOrder="0" pos="176 80 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="cmbJustification" id="3027d58c43e6917d" memberName="cmbJustification"
            virtualName="" explicitFocusOrder="0" pos="176 112 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="slLineSpacing" id="3b1f366a073880a2" memberName="slLineSpacing"
          virtualName="" explicitFocusOrder="0" pos="176 144 150 24" min="0"
          max="10" int="0.01" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <GROUPCOMPONENT name="grpFont" id="52e5cd3f5080a521" memberName="grpFont" virtualName=""
                  explicitFocusOrder="0" pos="352 24 368 160" title="Font"/>
  <LABEL name="lblFontFamily" id="d037d474366e401" memberName="lblFontFamily"
         virtualName="" explicitFocusOrder="0" pos="360 48 88 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Font Family:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lblFontStyle" id="f02cd2539d58c484" memberName="lblFontStyle"
         virtualName="" explicitFocusOrder="0" pos="360 80 88 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Font Style:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="cf07a5eeda65d9ac" memberName="tbUnderlined"
                virtualName="" explicitFocusOrder="0" pos="464 152 96 24" buttonText="Underlined"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="5bf220e968c7964a" memberName="tbStrikethrough"
                virtualName="" explicitFocusOrder="0" pos="592 152 112 24" buttonText="Strikethrough"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <COMBOBOX name="cmbFontFamily" id="9e5ea60f90cf14f4" memberName="cmbFontFamily"
            virtualName="" explicitFocusOrder="0" pos="464 48 240 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="cmbFontStyle" id="673f21889c8bfb2e" memberName="cmbFontStyle"
            virtualName="" explicitFocusOrder="0" pos="464 80 240 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <GROUPCOMPONENT name="grpColor" id="b8fcf61077322a68" memberName="grpColor" virtualName=""
                  explicitFocusOrder="0" pos="728 24 288 64" title="Color"/>
  <GENERICCOMPONENT name="csColor" id="7a3db1d481bab47d" memberName="csColor" virtualName=""
                    explicitFocusOrder="0" pos="848 48 152 24" class="Component"
                    params=""/>
  <LABEL name="lblColor" id="e29bf1fdaf1082e" memberName="lblColor" virtualName=""
         explicitFocusOrder="0" pos="736 48 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Color:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="grpDbgCaret" id="100a21baa59a76bf" memberName="grpDbgCaret"
                  virtualName="" explicitFocusOrder="0" pos="728 184 288 120" title="Debug Caret"/>
  <LABEL name="lblCaretPos" id="6f695c0a3333521b" memberName="lblCaretPos"
         virtualName="" explicitFocusOrder="0" pos="736 200 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Caret Position" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="slCaretPos" id="583ed4d0b4adc577" memberName="slCaretPos"
          virtualName="" explicitFocusOrder="0" pos="848 200 152 24" min="0"
          max="1000000" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="lblCaretSelStart" id="3eabbbe9a2e5eaca" memberName="lblCaretSelStart"
         virtualName="" explicitFocusOrder="0" pos="736 232 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Selection Start" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="slCaretSelStart" id="d3d3267f4846eb5c" memberName="slCaretSelStart"
          virtualName="" explicitFocusOrder="0" pos="848 232 152 24" min="0"
          max="1000000" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="slCaretSelEnd" id="b5d1e45cbdfe2c9e" memberName="slCaretSelEnd"
          virtualName="" explicitFocusOrder="0" pos="848 264 152 24" min="0"
          max="1000000" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="lblCaretSelEnd" id="241f6c20a0060107" memberName="lblCaretSelEnd"
         virtualName="" explicitFocusOrder="0" pos="736 264 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Selection End" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="grpDbgRanges" id="a2bb8fa9d9dcbbb7" memberName="grpDbgRanges"
                  virtualName="" explicitFocusOrder="0" pos="24 184 696 120" title="Debug Ranges"/>
  <TEXTEDITOR name="txtDbgRanges" id="ec90d62270af2f7" memberName="txtDbgRanges"
              virtualName="" explicitFocusOrder="0" pos="40 208 576 80" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="txtEditor" id="4776c9001d3dc46a" memberName="txtEditor"
              virtualName="" explicitFocusOrder="0" pos="24 504 992 272" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="tbDbgRanges" id="624f95c791305592" memberName="tbDbgRanges"
              virtualName="" explicitFocusOrder="0" pos="624 208 86 24" buttonText="Update"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="slFontSize" id="9b9110caf02564d2" memberName="slFontSize"
          virtualName="" explicitFocusOrder="0" pos="464 112 150 24" min="0"
          max="10" int="0.01" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="lblFontSize" id="a4db4ea27a68d665" memberName="lblFontSize"
         virtualName="" explicitFocusOrder="0" pos="360 112 88 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Font Size:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="grpDbgActions" id="a8010f9238bbd1a8" memberName="grpDbgActions"
                  virtualName="" explicitFocusOrder="0" pos="24 304 992 192" title="Debug Actions"/>
  <TEXTBUTTON name="tbR1C1" id="f091f6df5f01878d" memberName="tbR1C1" virtualName=""
              explicitFocusOrder="0" pos="40 328 184 24" buttonText="tbR1C1"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR2C1" id="1ebbebe540e2111b" memberName="tbR2C1" virtualName=""
              explicitFocusOrder="0" pos="40 360 184 24" buttonText="tbR2C1"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR3C1" id="ae8a537fdd0bc4cd" memberName="tbR3C1" virtualName=""
              explicitFocusOrder="0" pos="40 392 184 24" buttonText="tbR3C1"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR4C1" id="cd72536a14e38731" memberName="tbR4C1" virtualName=""
              explicitFocusOrder="0" pos="40 424 184 24" buttonText="tbR4C1"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR1C2" id="e9d8c2877aa2bfb4" memberName="tbR1C2" virtualName=""
              explicitFocusOrder="0" pos="240 328 184 24" buttonText="tbR1C2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR2C2" id="2231d1ae1c626119" memberName="tbR2C2" virtualName=""
              explicitFocusOrder="0" pos="240 360 184 24" buttonText="tbR2C2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR3C2" id="a66c0cd166e0bdd1" memberName="tbR3C2" virtualName=""
              explicitFocusOrder="0" pos="240 392 184 24" buttonText="tbR3C2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR4C2" id="d3a7ca6128dfcd8f" memberName="tbR4C2" virtualName=""
              explicitFocusOrder="0" pos="240 424 184 24" buttonText="tbR4C2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR1C3" id="beebacf089a9b81c" memberName="tbR1C3" virtualName=""
              explicitFocusOrder="0" pos="432 328 184 24" buttonText="tbR1C3"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR2C3" id="eb6d1b17ffd2b967" memberName="tbR2C3" virtualName=""
              explicitFocusOrder="0" pos="432 360 184 24" buttonText="tbR2C3"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR3C3" id="e10dd199272cb2df" memberName="tbR3C3" virtualName=""
              explicitFocusOrder="0" pos="432 392 184 24" buttonText="tbR3C3"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR4C3" id="9e1df3c85f51fe05" memberName="tbR4C7" virtualName=""
              explicitFocusOrder="0" pos="432 424 184 24" buttonText="tbR4C3"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR1C4" id="76843e27d472543c" memberName="tbR1C4" virtualName=""
              explicitFocusOrder="0" pos="624 328 184 24" buttonText="tbR1C4"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR1C5" id="c0643f508365dfe3" memberName="tbR1C5" virtualName=""
              explicitFocusOrder="0" pos="816 328 184 24" buttonText="tbR1C5"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR2C4" id="bd74bb17cdb7caa5" memberName="tbR2C4" virtualName=""
              explicitFocusOrder="0" pos="624 360 184 24" buttonText="tbR2C4"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR3C4" id="eeb69bf0bb9add0f" memberName="tbR3C4" virtualName=""
              explicitFocusOrder="0" pos="624 392 184 24" buttonText="tbR3C4"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR4C4" id="805f168d5dd00362" memberName="tbR4C8" virtualName=""
              explicitFocusOrder="0" pos="624 424 184 24" buttonText="tbR4C4"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR2C5" id="b3cde3cb39afcbaa" memberName="tbR2C5" virtualName=""
              explicitFocusOrder="0" pos="816 360 184 24" buttonText="tbR2C5"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR3C5" id="3792b4cef305310e" memberName="tbR3C5" virtualName=""
              explicitFocusOrder="0" pos="816 392 184 24" buttonText="tbR3C5"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR4C5" id="b813456ac379486a" memberName="tbR4C9" virtualName=""
              explicitFocusOrder="0" pos="816 424 184 24" buttonText="tbR4C5"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR5C1" id="4a88ec395b547518" memberName="tbR5C1" virtualName=""
              explicitFocusOrder="0" pos="40 456 184 24" buttonText="tbR5C1"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR5C2" id="421f8c7d1e1ee749" memberName="tbR5C2" virtualName=""
              explicitFocusOrder="0" pos="240 456 184 24" buttonText="tbR5C2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR5C3" id="61ef390743c30713" memberName="tbR5C3" virtualName=""
              explicitFocusOrder="0" pos="432 456 184 24" buttonText="tbR5C3"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR5C4" id="458971acf2264a32" memberName="tbR5C4" virtualName=""
              explicitFocusOrder="0" pos="624 456 184 24" buttonText="tbR5C4"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="tbR5C5" id="8b288a8afc0aa5cc" memberName="tbR5C5" virtualName=""
              explicitFocusOrder="0" pos="816 456 184 24" buttonText="tbR5C5"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
