#include "NoWordlistException.h"

const char *NoWordlistException::what() const noexcept {
    return "The words list could not be opened or found";
}
