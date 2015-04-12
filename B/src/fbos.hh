#ifndef FBOS_HH
# define FBOS_HH

#include "intro.h"
#include "loading.hh"
#include "fbodata.hh"

namespace FBO
{
  extern Unit * list;

  void loadFBOs(IntroObject& intro, Loading::ProgressDelegate * pd, int low, int high);

  // Rend le contenu du framebuffer courant sur le framebuffer syst�me
  // en appliquant le shader indiqu�.
  // Apr�s cette op�ration, le framebuffer courant est le framebuffer syst�me.
  void applyPostProcessing(Shader::id shaderId);
}

#endif // FBOS_HH