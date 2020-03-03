COMPONENT_NAME=memfault_heartbeat_metrics

SRC_FILES = \
  $(MFLT_COMPONENTS_DIR)/metrics/src/memfault_metrics.c \
  $(MFLT_COMPONENTS_DIR)/core/src/memfault_serializer_helper.c \
  $(MFLT_COMPONENTS_DIR)/util/src/memfault_minimal_cbor.c

MOCK_AND_FAKE_SRC_FILES += \
 $(MFLT_TEST_FAKE_DIR)/fake_memfault_event_storage.cpp \
 $(MFLT_TEST_FAKE_DIR)/fake_memfault_platform_debug_log.c \
 $(MFLT_TEST_FAKE_DIR)/fake_memfault_platform_get_device_info.c \
 $(MFLT_TEST_FAKE_DIR)/fake_memfault_platform_locking.c

TEST_SRC_FILES = \
  $(MFLT_TEST_SRC_DIR)/test_memfault_heartbeat_metrics.cpp \
  $(MOCK_AND_FAKE_SRC_FILES)

include $(CPPUTEST_MAKFILE_INFRA)