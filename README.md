# anoise
_Library that returns smoothed values, reduces noise read from a sensor_

> Note: So far the library has only a value smoothing implementation.

## `Smooth()` function

> It is necessary to first determine a value for the range by using the `setRangeSize(uint8_t range)` method.

The `Smooth()` function is given an integer value. It will return the same value if the value is not less than itself plus the range nor itself less than the range. If the read value is out of range, it returns this new value.
