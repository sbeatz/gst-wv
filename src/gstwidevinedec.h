#ifndef _GST_WIDEVINE_DECRYPT_H_
#define _GST_WIDEVINE_DECRYPT_H_

#include <gst/base/gstbasetransform.h>

G_BEGIN_DECLS
#define GST_TYPE_WIDEVINE_DECRYPT   (gst_widevine_decrypt_get_type())
#define GST_WIDEVINE_DECRYPT(obj)   (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_WIDEVINE_DECRYPT,GstWidevineDecrypt))
#define GST_WIDEVINE_DECRYPT_CLASS(klass)   (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_WIDEVINE_DECRYPT,GstWidevineDecryptClass))
#define GST_IS_WIDEVINE_DECRYPT(obj)   (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_WIDEVINE_DECRYPT))
#define GST_IS_WIDEVINE_DECRYPT_CLASS(obj)   (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_WIDEVINE_DECRYPT))
typedef struct _GstWidevineDecrypt GstWidevineDecrypt;
typedef struct _GstWidevineDecryptClass GstWidevineDecryptClass;


GType gst_widevine_decrypt_get_type (void);

G_END_DECLS
#endif
