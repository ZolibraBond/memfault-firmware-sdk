#pragma once

//! @file
//!
//! Copyright (c) Memfault, Inc.
//! See LICENSE for details
//!
//! A convenience header to pick up all the possible Memfault SDK APIs available
//!
//! For example, in a platform port file, a user of the SDK can pick up this single header and
//! start implementing dependencies without needed any other memfault component headers:
//!
//!  #include memfault/components.h
//!

#include "memfault/config.h"
#include "memfault/core/arch.h"
#include "memfault/core/batched_events.h"
#include "memfault/core/build_info.h"
#include "memfault/core/compiler.h"
#include "memfault/core/custom_data_recording.h"
#include "memfault/core/data_export.h"
#include "memfault/core/data_packetizer.h"
#include "memfault/core/debug_log.h"
#include "memfault/core/device_info.h"
#include "memfault/core/errors.h"
#include "memfault/core/event_storage.h"
#include "memfault/core/heap_stats.h"
#include "memfault/core/log.h"
#include "memfault/core/math.h"
#include "memfault/core/platform/core.h"
#include "memfault/core/platform/crc32.h"
#include "memfault/core/platform/debug_log.h"
#include "memfault/core/platform/device_info.h"
#include "memfault/core/platform/nonvolatile_event_storage.h"
#include "memfault/core/platform/overrides.h"
#include "memfault/core/platform/reboot_tracking.h"
#include "memfault/core/platform/system_time.h"
#include "memfault/core/reboot_reason_types.h"
#include "memfault/core/reboot_tracking.h"
#include "memfault/core/sdk_assert.h"
#include "memfault/core/self_test.h"
#include "memfault/core/task_watchdog.h"
#include "memfault/core/trace_event.h"
#include "memfault/demo/cli.h"
#include "memfault/demo/shell.h"
#include "memfault/demo/shell_commands.h"
#include "memfault/demo/util.h"
#include "memfault/http/http_client.h"
#include "memfault/http/platform/http_client.h"
#include "memfault/http/root_certs.h"
#include "memfault/http/utils.h"
#include "memfault/metrics/battery.h"
#include "memfault/metrics/connectivity.h"
#include "memfault/metrics/metrics.h"
#include "memfault/metrics/platform/battery.h"
#include "memfault/metrics/platform/overrides.h"
#include "memfault/metrics/platform/timer.h"
#include "memfault/metrics/reliability.h"
#include "memfault/metrics/utils.h"
#include "memfault/panics/assert.h"
#include "memfault/panics/coredump.h"
#include "memfault/panics/fault_handling.h"
#include "memfault/panics/platform/coredump.h"
#include "memfault/util/banner.h"
#include "memfault/util/base64.h"
#include "memfault/util/cbor.h"
#include "memfault/util/circular_buffer.h"
#include "memfault/util/crc16.h"
#include "memfault/util/rle.h"
#include "memfault/util/varint.h"
#include "memfault/version.h"
