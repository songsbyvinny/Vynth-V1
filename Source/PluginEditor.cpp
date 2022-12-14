/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Vynth_V1AudioProcessorEditor::Vynth_V1AudioProcessorEditor (Vynth_V1AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 600);
}

Vynth_V1AudioProcessorEditor::~Vynth_V1AudioProcessorEditor()
{
}

//==============================================================================
void Vynth_V1AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (24.0f);
    g.drawFittedText ("Welcome to Vynth(V1.0) a randomized, alogrith-based wave structure generator plugin", getLocalBounds(), juce::Justification::centredTop, 2, (1.0f));
}

void Vynth_V1AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
