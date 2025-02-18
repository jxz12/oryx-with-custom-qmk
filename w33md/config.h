/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#undef DEBOUNCE
#define DEBOUNCE 15

#define PERMISSIVE_HOLD

#define QUICK_TAP_TERM 0

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 15

#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 40

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 40

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 11

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 13

#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 45

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 4

#define USB_POLLING_INTERVAL_MS 10
#define SERIAL_NUMBER "w33md/Wvvljo"
#define LAYER_STATE_8BIT
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

