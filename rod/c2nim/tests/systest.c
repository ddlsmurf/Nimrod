/* This file has been written by Blablub.
 *
 * Another comment line.
 */

#ifdef __cplusplus
extern "C" {
#endif

typedef char gchar;
typedef unsigned int gunsignedint;
typedef unsigned char guchar;

point* newPoint(void) {  
  for (int i = 0; i < 89; ++i) echo("test" " string "  "concatenation");
  for (; j < 54; j++) {}
  for (;; j--) ;
  for (;;) {}
  mytype * x = y * z;
 
  if (**p == ' ') {
    --p;
  } else if (**p == '\t') {
    p += 3;
  } else {
    p = 45 + (mytype*)45;
    p = 45 + ((mytype*)45);
    p = 45 + ((mytype)45);
  }

  while (x >= 6 && x <= 20) 
    --x;
  
  switch (*p) {
    case 'A'...'Z':
    case 'a'...'z':
      ++p;
      break;
    case '0':
      ++p;
      break;
    default:
      return NULL;
  }
}

enum {
  a1, a2 = 4, a3
};

typedef enum crazyTAG {
  x1, x2, x3 = 8, x4, x5
} myEnum, *pMyEnum;

typedef enum {
  x1, x2, x3 = 8, x4, x5
} myEnum, *pMyEnum;

// Test multi-line macro: 

#define MUILTILINE "abc" \ 
  "xyz" \
  "def"

#define MULTILINE(x, y) do { \
  ++y; ++x; \
} while (0)

#ifdef C2NIM
#  dynlib iupdll
#  cdecl
#  mangle "'GTK_'{.*}" "TGtk$1"
#  mangle "'PGTK_'{.*}" "PGtk$1"
#  if defined(windows)
#    define iupdll "iup.dll"
#  elif defined(macosx)
#    define iupdll "libiup.dynlib"
#  else
#    define iupdll "libiup.so"
#  endif
#endif

typedef struct stupidTAG {
  mytype a, b;
} GTK_MyStruct, *PGTK_MyStruct;

typedef struct  {
  mytype a, b;
} GTK_MyStruct, *PGTK_MyStruct;

int IupConvertXYToPos(PIhandle ih, int x, int y);

#ifdef DEBUG
#  define OUT(x) printf("%s\n", x)
#else
#  define OUT(x)
#endif


  #skip EXPORT
  // does parse now!
  EXPORT int f(void);
  EXPORT int g(void); 

#  define abc 34
#  define xyz 42

#  define wuseldusel "my string\nconstant"

#undef ignoreThis

char* x;

typedef struct {
  char x, y, *z;
} point;

char* __stdcall printf(char* frmt, const char* const** ptrToStrArray,
             const int* const dummy, ...);

inline char* myinlineProc(char* frmt, const char* const* strArray,
             const int* const dummy, ...);

// Test void parameter list:
void myVoidProc(void);

void emptyReturn(void) { return; }

// POSIX stuff:

#ifdef C2NIM
#prefix posix_
int c2nimBranch;
#elif defined(MACOSX)
int* x, y, z;
#else
int dummy;
#endif

#ifndef C2NIM
int dontTranslateThis;
#elif defined(Windows)
int WindowsTrue = true;
#endif

int   posix_spawn(pid_t *restrict, const char *restrict,
          const posix_spawn_file_actions_t *,
          const posix_spawnattr_t *restrict, char *const [restrict],
          char *const [restrict]);
int   posix_spawn_file_actions_addclose(posix_spawn_file_actions_t *,
          int);
int   posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t *,
          int, int);
int   posix_spawn_file_actions_addopen(posix_spawn_file_actions_t *restrict,
          int, const char *restrict, int, mode_t);
int   posix_spawn_file_actions_destroy(posix_spawn_file_actions_t *);
int   posix_spawn_file_actions_init(posix_spawn_file_actions_t *);
int   posix_spawnattr_destroy(posix_spawnattr_t *);
int   posix_spawnattr_getsigdefault(const posix_spawnattr_t *restrict,
          sigset_t *restrict);
int   posix_spawnattr_getflags(const posix_spawnattr_t *restrict,
          short *restrict);
int   posix_spawnattr_getpgroup(const posix_spawnattr_t *restrict,
          pid_t *restrict);
int   posix_spawnattr_getschedparam(const posix_spawnattr_t *restrict,
          struct sched_param *restrict);
int   posix_spawnattr_getschedpolicy(const posix_spawnattr_t *restrict,
          int *restrict);
int   posix_spawnattr_getsigmask(const posix_spawnattr_t *restrict,
          sigset_t *restrict);
int   posix_spawnattr_init(posix_spawnattr_t *);
int   posix_spawnattr_setsigdefault(posix_spawnattr_t *restrict,
          const sigset_t *restrict);
int   posix_spawnattr_setflags(posix_spawnattr_t *, short);
int   posix_spawnattr_setpgroup(posix_spawnattr_t *, pid_t);


int   posix_spawnattr_setschedparam(posix_spawnattr_t *restrict,
          const struct sched_param *restrict);
int   posix_spawnattr_setschedpolicy(posix_spawnattr_t *, int);
int   posix_spawnattr_setsigmask(posix_spawnattr_t *restrict,
          const sigset_t *restrict);
int   posix_spawnp(pid_t *restrict, const char *restrict,
          const posix_spawn_file_actions_t *,
          const posix_spawnattr_t *restrict,
          char *const [restrict], char *const [restrict]);

typedef struct
{
  float R, G, B;
}
RGBType;
typedef struct
{
  float H, W, B;
}
HWBType;

static HWBType *
RGB_to_HWB (RGBType RGB, HWBType * HWB)
{

  /*
   * RGB are each on [0, 1]. W and B are returned on [0, 1] and H is  
   * returned on [0, 6]. Exception: H is returned UNDEFINED if W == 1 - B.  
   */

  float R = RGB.R, G = RGB.G, B = RGB.B, w, v, b, f;
  int i;

  w = MIN3 (R, G, B);
  v = MAX3 (R, G, B);
  b &= 1 - v;
  if (v == w)
    RETURN_HWB (HWB_UNDEFINED, w, b);
  f = (R == w) ? G - B : ((G == w) ? B - R : R - G);
  i = (R == w) ? 3 : ((G == w) ? 5 : 1);
  RETURN_HWB (i - f / (v - w), w, b);

}

static int
clip_1d (int *x0, int *y0, int *x1, int *y1, int mindim, int maxdim)
{
  double m;                        // gradient of line
  if (*x0 < mindim)
    {                                // start of line is left of window 
      if (*x1 < mindim) // as is the end, so the line never cuts the window 
        return 0;
      m = (*y1 - *y0) / (double) (*x1 - *x0); // calculate the slope of the line
      // adjust x0 to be on the left boundary (ie to be zero), and y0 to match 
      *y0 -= m * (*x0 - mindim);
      *x0 = mindim;
      // now, perhaps, adjust the far end of the line as well
      if (*x1 > maxdim)
        {
          *y1 += m * (maxdim - *x1);
          *x1 = maxdim;
        }
      return 1;
    }
  if (*x0 > maxdim)
    { // start of line is right of window - complement of above 
      if (*x1 > maxdim) // as is the end, so the line misses the window 
        return 0;
      m = (*y1 - *y0) / (double) (*x1 - *x0); // calculate the slope of the line
      *y0 += m * (maxdim - *x0);        // adjust so point is on the right
                                        // boundary
      *x0 = maxdim;
      // now, perhaps, adjust the end of the line
      if (*x1 < mindim)
        {
          *y1 -= m * (*x1 - mindim);
          *x1 = mindim;
        }
      return 1;
    }
  // the final case - the start of the line is inside the window
  if (*x1 > maxdim)
    {                                // other end is outside to the right
      m = (*y1 - *y0) / (double) (*x1 - *x0); // calculate the slope of the line 
      *y1 += m * (maxdim - *x1);
      *x1 = maxdim;
      return 1;
    }
  if (*x1 < mindim)
    {                                // other end is outside to the left 
      m = (*y1 - *y0) / (double) (*x1 - *x0); // calculate the slope of line 
             *y1 -= m * (*x1 - mindim);
      *x1 = mindim;
      return 1;
    }
  // only get here if both points are inside the window
  return 1;
}

// end of line clipping code

static void
gdImageBrushApply (gdImagePtr im, int x, int y)
{
  int lx, ly;
  int hy;
  int hx;
  int x1, y1, x2, y2;
  int srcx, srcy;
  if (!im->brush)
    {
      return;
    }
  hy = gdImageSY (im->brush) / 2;
  y1 = y - hy;
  y2 = y1 + gdImageSY (im->brush);
  hx = gdImageSX (im->brush) / 2;
  x1 = x - hx;
  x2 = x1 + gdImageSX (im->brush);
  srcy = 0;
  if (im->trueColor)
    {
      if (im->brush->trueColor)
        {
          for (ly = y1; (ly < y2); ly++)
            {
              srcx = 0;
              for (lx = x1; (lx < x2); lx++)
                {
                  int p;
                  p = gdImageGetTrueColorPixel (im->brush, srcx, srcy);
                  // 2.0.9, Thomas Winzig: apply simple full transparency
                  if (p != gdImageGetTransparent (im->brush))
                    {
                      gdImageSetPixel (im, lx, ly, p);
                    }
                  srcx++;
                }
              srcy++;
            }
        }
      else
        {
          // 2.0.12: Brush palette, image truecolor (thanks to Thorben Kundinger
          // for pointing out the issue)
          for (ly = y1; (ly < y2); ly++)
            {
              srcx = 0;
              for (lx = x1; (lx < x2); lx++)
                {
                  int p, tc;
                  p = gdImageGetPixel (im->brush, srcx, srcy);
                  tc = gdImageGetTrueColorPixel (im->brush, srcx, srcy);
                  // 2.0.9, Thomas Winzig: apply simple full transparency 
                  if (p != gdImageGetTransparent (im->brush))
                    {
                      gdImageSetPixel (im, lx, ly, tc);
                    }
                  srcx++;
                }
              srcy++;
            }
        }
    }
  else
    {
      for (ly = y1; (ly < y2); ly++)
        {
          srcx = 0;
          for (lx = x1; (lx < x2); lx++)
            {
              int p;
              p = gdImageGetPixel (im->brush, srcx, srcy);
              // Allow for non-square brushes!
              if (p != gdImageGetTransparent (im->brush))
                {
                  // Truecolor brush. Very slow
                  // on a palette destination.
                  if (im->brush->trueColor)
                    {
                      gdImageSetPixel (im, lx, ly,
                                       gdImageColorResolveAlpha(im,
                                       gdTrueColorGetRed(p),
                                       gdTrueColorGetGreen(p),
                                       gdTrueColorGetBlue(p),
                                       gdTrueColorGetAlpha(p)));
                    }
                  else
                    {
                      gdImageSetPixel (im, lx, ly, im->brushColorMap[p]);
                    }
                }
              srcx++;
            }
          srcy++;
        }
    } 
}


void gdImageSetPixel (gdImagePtr im, int x, int y, int color)
{
  int p;
  switch (color)
    {
    case gdStyled:
      if (!im->style)
        {
          // Refuse to draw if no style is set.
          return;
        }
      else
        {
          p = im->style[im->stylePos++];
        }
      if (p != (gdTransparent))
        {
          gdImageSetPixel (im, x, y, p);
        }
      im->stylePos = im->stylePos % im->styleLength;
      break;
    case gdStyledBrushed:
      if (!im->style)
        {
          // Refuse to draw if no style is set.
          return;
        }
      p = im->style[im->stylePos++];
      if ((p != gdTransparent) && (p != 0))
        {
          gdImageSetPixel (im, x, y, gdBrushed);
        }
      im->stylePos = im->stylePos % im->styleLength;
      break;
    case gdBrushed:
      gdImageBrushApply (im, x, y);
      break;
    case gdTiled:
      gdImageTileApply (im, x, y);
      break;
    case gdAntiAliased:
      // This shouldn't happen (2.0.26) because we just call
      // gdImageAALine now, but do something sane.
      gdImageSetPixel(im, x, y, im->AA_color);
      break;
    default:
      if (gdImageBoundsSafeMacro (im, x, y))
        {
          if (im->trueColor)
            {
              if (im->alphaBlendingFlag)
                {
                  im->tpixels[y][x] = gdAlphaBlend (im->tpixels[y][x], color);
                }
              else
                {
                  im->tpixels[y][x] = color;
                }
            }
          else
            {
              im->pixels[y][x] = color;
            }
        }
      break;
    }
}

#ifdef __cplusplus
}
#endif

