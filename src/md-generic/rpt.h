/*
  * UAE - The Un*x Amiga Emulator
  *
  * Definitions for accessing cycle counters on a given machine, if possible.
  *
  * Copyright 1998 Bernd Schmidt
  * Copyright 2011 Mustafa TUFAN
  */

#ifndef EUAE_MACHDEP_RPT_H
#define EUAE_MACHDEP_RPT_H

STATIC_INLINE uae_s32 read_processor_time (void)
{
    return 0;
}

STATIC_INLINE frame_time_t machdep_gethrtime (void)
{
    return read_processor_time ();
}

frame_time_t machdep_gethrtimebase (void);
int          machdep_inithrtimer   (void);

#endif /* EUAE_MACHDEP_RPT_H */
