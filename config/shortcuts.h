#define WORD_L LC(LEFT)
#define WORD_R LC(RIGHT)

#define LINE_L LG(LBRC)
#define LINE_R LG(RBRC)

#define DEL_WRD LC(BSPC)

#define TAB_L LC(LS(TAB))
#define TAB_R LC(TAB)

#define MCUT   LC(X)
#define MCOPY  LC(C)
#define MPASTE LC(V)

#define EMOJI LC(LG(SPACE))

#define CAP_LST LG(LS(N7))        // Capture last screen region
#define CAP_IMG LG(LS(N6))        // Capture portion of screen
#define CAP_MOV LG(LS(N5))        // Capture video of screen

#define XBX_IMG LG(LA(PSCRN))     // Capture portion of screen
#define XBX_MOV LG(LA(G))        // Capture last 30 seconds
