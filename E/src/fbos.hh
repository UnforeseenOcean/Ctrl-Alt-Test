#ifndef FBOS_HH
# define FBOS_HH

#include "intro.h"
#include "loading.hh"
#include "fbodata.hh"
#include "trails.hh"

namespace FBO
{
  extern Unit * list;

  void loadFBOs(IntroObject& intro, Loading::ProgressDelegate * pd, int low, int high);

  // Rend le contenu du framebuffer courant sur le framebuffer syst�me
  // en appliquant le shader indiqu�.
  // Apr�s cette op�ration, le framebuffer courant est le framebuffer syst�me.
  void applyPostProcessing(IntroObject& intro, Shader::id shaderId, bool isFinal);
  void generateDownscales(IntroObject& intro);
  void finalPass(IntroObject& intro);

#if DEBUG_TRAILS

  void showTrails(IntroObject& intro);

#endif // DEBUG_TRAILS

}

#endif // FBOS_HH
