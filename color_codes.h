#ifndef COLOR_CODES_H_
#define COLOR_CODES_H_

typedef enum {WHITE, RED, BLACK, YELLOW, VIOLET} MajorColor;
typedef enum {BLUE, ORANGE, GREEN, BROWN, SLATE} MinorColor;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* colorpairnames);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintColorCodeManual(void);

#endif 
