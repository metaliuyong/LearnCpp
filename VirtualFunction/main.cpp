#include "Base.h"
#include "Derive.h"
#include <memory>

int main() {
    std::unique_ptr<Base> pBase = std::make_unique<Derive> ();
    pBase->func();
    return 0;
}
