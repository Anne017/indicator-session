/*
 * Generated by gdbus-codegen 2.34.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __DBUS_CONSOLEKIT_SESSION_H__
#define __DBUS_CONSOLEKIT_SESSION_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.ConsoleKit.Session */

#define TYPE_CONSOLE_KIT_SESSION (console_kit_session_get_type ())
#define CONSOLE_KIT_SESSION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_CONSOLE_KIT_SESSION, ConsoleKitSession))
#define IS_CONSOLE_KIT_SESSION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_CONSOLE_KIT_SESSION))
#define CONSOLE_KIT_SESSION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_CONSOLE_KIT_SESSION, ConsoleKitSessionIface))

struct _ConsoleKitSession;
typedef struct _ConsoleKitSession ConsoleKitSession;
typedef struct _ConsoleKitSessionIface ConsoleKitSessionIface;

struct _ConsoleKitSessionIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_activate) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_creation_time) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_display_device) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_id) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_idle_hint) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_idle_since_hint) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_login_session_id) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_remote_host_name) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_seat_id) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_session_type) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_unix_user) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_user) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_x11_display) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_x11_display_device) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_is_active) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_is_local) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_lock) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_idle_hint) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_idle_hint);

  gboolean (*handle_unlock) (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_active) (ConsoleKitSession *object);

  const gchar * (*get_display_device) (ConsoleKitSession *object);

  gboolean  (*get_idle_hint) (ConsoleKitSession *object);

  gboolean  (*get_is_local) (ConsoleKitSession *object);

  const gchar * (*get_remote_host_name) (ConsoleKitSession *object);

  const gchar * (*get_session_type) (ConsoleKitSession *object);

  guint  (*get_unix_user) (ConsoleKitSession *object);

  guint  (*get_user) (ConsoleKitSession *object);

  const gchar * (*get_x11_display) (ConsoleKitSession *object);

  const gchar * (*get_x11_display_device) (ConsoleKitSession *object);

  void (*active_changed) (
    ConsoleKitSession *object,
    gboolean arg_is_active);

  void (*idle_hint_changed) (
    ConsoleKitSession *object,
    gboolean arg_hint);

  void (*lock) (
    ConsoleKitSession *object);

  void (*unlock) (
    ConsoleKitSession *object);

};

GType console_kit_session_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *console_kit_session_interface_info (void);
guint console_kit_session_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void console_kit_session_complete_get_id (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *ssid);

void console_kit_session_complete_get_seat_id (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *sid);

void console_kit_session_complete_get_session_type (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *type);

void console_kit_session_complete_get_user (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    guint uid);

void console_kit_session_complete_get_unix_user (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    guint uid);

void console_kit_session_complete_get_x11_display (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *display);

void console_kit_session_complete_get_x11_display_device (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *x11_display_device);

void console_kit_session_complete_get_display_device (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *display_device);

void console_kit_session_complete_get_remote_host_name (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *remote_host_name);

void console_kit_session_complete_get_login_session_id (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *login_session_id);

void console_kit_session_complete_is_active (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    gboolean active);

void console_kit_session_complete_is_local (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    gboolean local);

void console_kit_session_complete_get_creation_time (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *iso8601_datetime);

void console_kit_session_complete_activate (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

void console_kit_session_complete_lock (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

void console_kit_session_complete_unlock (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);

void console_kit_session_complete_get_idle_hint (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    gboolean idle_hint);

void console_kit_session_complete_get_idle_since_hint (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation,
    const gchar *iso8601_datetime);

void console_kit_session_complete_set_idle_hint (
    ConsoleKitSession *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void console_kit_session_emit_active_changed (
    ConsoleKitSession *object,
    gboolean arg_is_active);

void console_kit_session_emit_idle_hint_changed (
    ConsoleKitSession *object,
    gboolean arg_hint);

void console_kit_session_emit_lock (
    ConsoleKitSession *object);

void console_kit_session_emit_unlock (
    ConsoleKitSession *object);



/* D-Bus method calls: */
void console_kit_session_call_get_id (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_id_finish (
    ConsoleKitSession *proxy,
    gchar **out_ssid,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_id_sync (
    ConsoleKitSession *proxy,
    gchar **out_ssid,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_seat_id (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_seat_id_finish (
    ConsoleKitSession *proxy,
    gchar **out_sid,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_seat_id_sync (
    ConsoleKitSession *proxy,
    gchar **out_sid,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_session_type (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_session_type_finish (
    ConsoleKitSession *proxy,
    gchar **out_type,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_session_type_sync (
    ConsoleKitSession *proxy,
    gchar **out_type,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_user (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_user_finish (
    ConsoleKitSession *proxy,
    guint *out_uid,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_user_sync (
    ConsoleKitSession *proxy,
    guint *out_uid,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_unix_user (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_unix_user_finish (
    ConsoleKitSession *proxy,
    guint *out_uid,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_unix_user_sync (
    ConsoleKitSession *proxy,
    guint *out_uid,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_x11_display (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_x11_display_finish (
    ConsoleKitSession *proxy,
    gchar **out_display,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_x11_display_sync (
    ConsoleKitSession *proxy,
    gchar **out_display,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_x11_display_device (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_x11_display_device_finish (
    ConsoleKitSession *proxy,
    gchar **out_x11_display_device,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_x11_display_device_sync (
    ConsoleKitSession *proxy,
    gchar **out_x11_display_device,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_display_device (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_display_device_finish (
    ConsoleKitSession *proxy,
    gchar **out_display_device,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_display_device_sync (
    ConsoleKitSession *proxy,
    gchar **out_display_device,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_remote_host_name (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_remote_host_name_finish (
    ConsoleKitSession *proxy,
    gchar **out_remote_host_name,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_remote_host_name_sync (
    ConsoleKitSession *proxy,
    gchar **out_remote_host_name,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_login_session_id (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_login_session_id_finish (
    ConsoleKitSession *proxy,
    gchar **out_login_session_id,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_login_session_id_sync (
    ConsoleKitSession *proxy,
    gchar **out_login_session_id,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_is_active (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_is_active_finish (
    ConsoleKitSession *proxy,
    gboolean *out_active,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_is_active_sync (
    ConsoleKitSession *proxy,
    gboolean *out_active,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_is_local (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_is_local_finish (
    ConsoleKitSession *proxy,
    gboolean *out_local,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_is_local_sync (
    ConsoleKitSession *proxy,
    gboolean *out_local,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_creation_time (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_creation_time_finish (
    ConsoleKitSession *proxy,
    gchar **out_iso8601_datetime,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_creation_time_sync (
    ConsoleKitSession *proxy,
    gchar **out_iso8601_datetime,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_activate (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_activate_finish (
    ConsoleKitSession *proxy,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_activate_sync (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_lock (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_lock_finish (
    ConsoleKitSession *proxy,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_lock_sync (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_unlock (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_unlock_finish (
    ConsoleKitSession *proxy,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_unlock_sync (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_idle_hint (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_idle_hint_finish (
    ConsoleKitSession *proxy,
    gboolean *out_idle_hint,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_idle_hint_sync (
    ConsoleKitSession *proxy,
    gboolean *out_idle_hint,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_get_idle_since_hint (
    ConsoleKitSession *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_get_idle_since_hint_finish (
    ConsoleKitSession *proxy,
    gchar **out_iso8601_datetime,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_get_idle_since_hint_sync (
    ConsoleKitSession *proxy,
    gchar **out_iso8601_datetime,
    GCancellable *cancellable,
    GError **error);

void console_kit_session_call_set_idle_hint (
    ConsoleKitSession *proxy,
    gboolean arg_idle_hint,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean console_kit_session_call_set_idle_hint_finish (
    ConsoleKitSession *proxy,
    GAsyncResult *res,
    GError **error);

gboolean console_kit_session_call_set_idle_hint_sync (
    ConsoleKitSession *proxy,
    gboolean arg_idle_hint,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
guint console_kit_session_get_unix_user (ConsoleKitSession *object);
void console_kit_session_set_unix_user (ConsoleKitSession *object, guint value);

guint console_kit_session_get_user (ConsoleKitSession *object);
void console_kit_session_set_user (ConsoleKitSession *object, guint value);

const gchar *console_kit_session_get_session_type (ConsoleKitSession *object);
gchar *console_kit_session_dup_session_type (ConsoleKitSession *object);
void console_kit_session_set_session_type (ConsoleKitSession *object, const gchar *value);

const gchar *console_kit_session_get_remote_host_name (ConsoleKitSession *object);
gchar *console_kit_session_dup_remote_host_name (ConsoleKitSession *object);
void console_kit_session_set_remote_host_name (ConsoleKitSession *object, const gchar *value);

const gchar *console_kit_session_get_display_device (ConsoleKitSession *object);
gchar *console_kit_session_dup_display_device (ConsoleKitSession *object);
void console_kit_session_set_display_device (ConsoleKitSession *object, const gchar *value);

const gchar *console_kit_session_get_x11_display (ConsoleKitSession *object);
gchar *console_kit_session_dup_x11_display (ConsoleKitSession *object);
void console_kit_session_set_x11_display (ConsoleKitSession *object, const gchar *value);

const gchar *console_kit_session_get_x11_display_device (ConsoleKitSession *object);
gchar *console_kit_session_dup_x11_display_device (ConsoleKitSession *object);
void console_kit_session_set_x11_display_device (ConsoleKitSession *object, const gchar *value);

gboolean console_kit_session_get_active (ConsoleKitSession *object);
void console_kit_session_set_active (ConsoleKitSession *object, gboolean value);

gboolean console_kit_session_get_is_local (ConsoleKitSession *object);
void console_kit_session_set_is_local (ConsoleKitSession *object, gboolean value);

gboolean console_kit_session_get_idle_hint (ConsoleKitSession *object);
void console_kit_session_set_idle_hint (ConsoleKitSession *object, gboolean value);


/* ---- */

#define TYPE_CONSOLE_KIT_SESSION_PROXY (console_kit_session_proxy_get_type ())
#define CONSOLE_KIT_SESSION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_CONSOLE_KIT_SESSION_PROXY, ConsoleKitSessionProxy))
#define CONSOLE_KIT_SESSION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_CONSOLE_KIT_SESSION_PROXY, ConsoleKitSessionProxyClass))
#define CONSOLE_KIT_SESSION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_CONSOLE_KIT_SESSION_PROXY, ConsoleKitSessionProxyClass))
#define IS_CONSOLE_KIT_SESSION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_CONSOLE_KIT_SESSION_PROXY))
#define IS_CONSOLE_KIT_SESSION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_CONSOLE_KIT_SESSION_PROXY))

typedef struct _ConsoleKitSessionProxy ConsoleKitSessionProxy;
typedef struct _ConsoleKitSessionProxyClass ConsoleKitSessionProxyClass;
typedef struct _ConsoleKitSessionProxyPrivate ConsoleKitSessionProxyPrivate;

struct _ConsoleKitSessionProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ConsoleKitSessionProxyPrivate *priv;
};

struct _ConsoleKitSessionProxyClass
{
  GDBusProxyClass parent_class;
};

GType console_kit_session_proxy_get_type (void) G_GNUC_CONST;

void console_kit_session_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ConsoleKitSession *console_kit_session_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ConsoleKitSession *console_kit_session_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void console_kit_session_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ConsoleKitSession *console_kit_session_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ConsoleKitSession *console_kit_session_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_CONSOLE_KIT_SESSION_SKELETON (console_kit_session_skeleton_get_type ())
#define CONSOLE_KIT_SESSION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_CONSOLE_KIT_SESSION_SKELETON, ConsoleKitSessionSkeleton))
#define CONSOLE_KIT_SESSION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_CONSOLE_KIT_SESSION_SKELETON, ConsoleKitSessionSkeletonClass))
#define CONSOLE_KIT_SESSION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_CONSOLE_KIT_SESSION_SKELETON, ConsoleKitSessionSkeletonClass))
#define IS_CONSOLE_KIT_SESSION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_CONSOLE_KIT_SESSION_SKELETON))
#define IS_CONSOLE_KIT_SESSION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_CONSOLE_KIT_SESSION_SKELETON))

typedef struct _ConsoleKitSessionSkeleton ConsoleKitSessionSkeleton;
typedef struct _ConsoleKitSessionSkeletonClass ConsoleKitSessionSkeletonClass;
typedef struct _ConsoleKitSessionSkeletonPrivate ConsoleKitSessionSkeletonPrivate;

struct _ConsoleKitSessionSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ConsoleKitSessionSkeletonPrivate *priv;
};

struct _ConsoleKitSessionSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType console_kit_session_skeleton_get_type (void) G_GNUC_CONST;

ConsoleKitSession *console_kit_session_skeleton_new (void);


G_END_DECLS

#endif /* __DBUS_CONSOLEKIT_SESSION_H__ */
