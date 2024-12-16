#define WORD_L LA(LEFT)
#define WORD_R LA(RIGHT)

#define LINE_L LG(LBRC)
#define LINE_R LG(RBRC)

#define DEL_WRD LA(BSPC)

#define TAB_L LC(LS(TAB))
#define TAB_R LC(TAB)

#define MCUT   LG(X)
#define MCOPY  LG(C)
#define MPASTE LG(V)

#define EMOJI LC(LG(SPACE))

#define CAP_LST LG(LS(N7))        // Capture last screen region
#define CAP_IMG LG(LS(N6))        // Capture portion of screen
#define CAP_MOV LG(LS(N5))        // Capture video of screen

#define XBX_IMG LG(LA(PSCRN))     // Capture portion of screen
#define XBX_MOV LG(LA(G))        // Capture last 30 seconds
