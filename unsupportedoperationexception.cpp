#include "unsupportedoperationexception.h"

UnsupportedOperationException::UnsupportedOperationException() {

}
const char* UnsupportedOperationException::what() {
    return "UnsupportedOperationException";
}
