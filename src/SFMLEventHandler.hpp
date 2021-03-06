#ifndef SFMLEventHandlerBaseClass_HeaderPlusPlus
#define SFMLEventHandlerBaseClass_HeaderPlusPlus

#include "SFML.hpp"

namespace chesspp
{
    class SFMLEventHandler
    {
    public:
        using uint = unsigned int;
        virtual void onClosed                ()                                                                      {}
        virtual void onResized               (uint w, uint h)                                                        {}
        virtual void onLostFocus             ()                                                                      {}
        virtual void onGainedFocus           ()                                                                      {}
        virtual void onTextEntered           (sf::Uint32 unicode)                                                    {}
        virtual void onKeyPressed            (sf::Keyboard::Key key, bool alt, bool control, bool shift, bool system){}
        virtual void onKeyReleased           (sf::Keyboard::Key key, bool alt, bool control, bool shift, bool system){}
        virtual void onMouseWheelMoved       (int delta, int x, int y)                                               {}
        virtual void onLButtonPressed        (int x, int y)                                                          {}
        virtual void onLButtonReleased       (int x, int y)                                                          {}
        virtual void onRButtonPressed        (int x, int y)                                                          {}
        virtual void onRButtonReleased       (int x, int y)                                                          {}
        virtual void onMButtonPressed        (int x, int y)                                                          {}
        virtual void onMButtonReleased       (int x, int y)                                                          {}
        virtual void onMouseButtonPressed    (sf::Mouse::Button button, int x, int y)                                {}
        virtual void onMouseButtonReleased   (sf::Mouse::Button button, int x, int y)                                {}
        virtual void onMouseMoved            (int x, int y)                                                          {}
        virtual void onMouseEnteredWindow    ()                                                                      {}
        virtual void onMouseLeftWindow       ()                                                                      {}
        virtual void onJoystickButtonPressed (uint joystickID, uint button)                                          {}
        virtual void onJoystickButtonReleased(uint joystickID, uint button)                                          {}
        virtual void onJoystickMoved         (uint joystickID, sf::Joystick::Axis axis, float position)              {}
        virtual void onJoystickConnected     (uint joystickID)                                                       {}
        virtual void onJoystickDisconnected  (uint joystickID)                                                       {}

        virtual ~SFMLEventHandler() = default;
    };
}

#endif
