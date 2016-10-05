#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "gstwidevinedec.h"

static gboolean
plugin_init (GstPlugin * plugin)
{
  if (!gst_element_register (plugin, "widevinedec", GST_RANK_PRIMARY,
          gst_widevine_decrypt_get_type ()))
    return FALSE;

  return TRUE;
}

GST_PLUGIN_DEFINE (GST_VERSION_MAJOR, GST_VERSION_MINOR,
    dash_widevine, "WIDEVINE DECRYPTOR",
    plugin_init, VERSION, "LGPL", PACKAGE_NAME, "http://www.google.com");
