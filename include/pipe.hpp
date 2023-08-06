#pragma once

template<typename D, typename F>
auto operator|(D&& d, F&& f) {
    return f(d);
}