/*
 * anoise
 *
 * created 26 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * Released into the MIT License.
 */

#ifndef anoise_h
#define anoise_h

static uint8_t rangeSize = 0;

void setRangeSize(uint8_t range) {
	rangeSize = range;
}

int Smooth(int val) {
	static int previousVal;

	if(val > (previousVal + rangeSize) || val < (previousVal - rangeSize))
		previousVal = val;

	return previousVal;
}

#endif //anoise_h
