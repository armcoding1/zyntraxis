#include "../include/speaker.h"
#include <cstdlib>
#include <string>

namespace Speaker {
void say(const std::string &text) {
  std::string command = "edge-tts --text '" + text +
                        "' --voice en-US-GuyNeural --write-media "
                        "/tmp/greet.mp3 && mpg123 /tmp/greet.mp3";
  std::system(command.c_str());
}
} // namespace Speaker