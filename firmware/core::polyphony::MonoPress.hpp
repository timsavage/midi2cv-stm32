/**
 * Mono Press
 * ~~~~~~~~~~
 *
 * The Mono polyphony model is where only one note per channel is used. This
 * is not really polyphony at all but a fallback to the simplest model.
 *
 */
#pragma once

#include "core::Key.h"
#include "core::polyphony::Polyphony.h"

namespace core {
namespace polyphony {

class MonoPress : public Polyphony
{
public:
    MonoPress(core::Key** keys, size_t keyCount)
    {
        if (keyCount > 0) {
            _key = keys[0];
        }
    }

    ~MonoPress(void) 
    {}

    const char *
    name(void) 
    {
        return "Mono";
    }

    void
    noteOn(uint8_t note, uint8_t)
    {
        _key->press(note);
    }

    void
    noteOff(uint8_t note, uint8_t)
    {
        if (_key->getNote() == note) {
            _key->release();
        }
    }

    void
    afterTouch(uint8_t)
    {

    }

    void
    pitchBend(int16_t amount)
    {
        _key->pitchBend(amount);
    }

private:
    Key *_key;
};

}}  // !polyphony::core
