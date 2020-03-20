
typedef int rcutils_ret_t;
typedef struct rcutils_allocator_t
{

  void *(*allocate)(size_t size, void *state);

  void (*deallocate)(void *pointer, void *state);
  void *(*reallocate)(void *pointer, size_t size, void *state);

  void *(*zero_allocate)(size_t number_of_elements, size_t size_of_element, void *state);

  void *state;
} rcutils_allocator_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_allocator_t
rcutils_get_zero_initialized_allocator(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_allocator_t
rcutils_get_default_allocator(void);

__attribute__((visibility("default")))
__attribute__((warn_unused_result)) bool
rcutils_allocator_is_valid(const rcutils_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) void *
rcutils_reallocf(void *pointer, size_t size, rcutils_allocator_t *allocator);

typedef rcutils_allocator_t rcl_allocator_t;
typedef int32_t rmw_ret_t;

typedef struct rmw_init_options_impl_t rmw_init_options_impl_t;

typedef struct rmw_init_options_t
{

  uint64_t instance_id;

  const char *implementation_identifier;

  rcutils_allocator_t allocator;

  rmw_init_options_impl_t *impl;
} rmw_init_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_init_options_t
rmw_get_zero_initialized_init_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_init_options_init(rmw_init_options_t *init_options, rcutils_allocator_t allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_init_options_copy(const rmw_init_options_t *src, rmw_init_options_t *dst);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_init_options_fini(rmw_init_options_t *init_options);

typedef struct rmw_context_impl_t rmw_context_impl_t;

typedef struct rmw_context_t
{

  uint64_t instance_id;

  const char *implementation_identifier;

  rmw_context_impl_t *impl;
} rmw_context_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_context_t
rmw_get_zero_initialized_context(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_init(const rmw_init_options_t *options, rmw_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_shutdown(rmw_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_context_fini(rmw_context_t *context);

__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcutils_snprintf(char *buffer, size_t buffer_size, const char *format, ...)
    __attribute__((format(printf, 3, 4)));

__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcutils_vsnprintf(char *buffer, size_t buffer_size, const char *format, va_list args);
typedef struct rcutils_error_string_t
{
  char str[1024];
} rcutils_error_string_t;

typedef struct rcutils_error_state_t
{

  char message[768];

  char file[(1024 - 768 - 20 - 6 - 1)];

  uint64_t line_number;
} rcutils_error_state_t;

static_assert(
    sizeof(rcutils_error_string_t) == (768 +
                                       (1024 - 768 - 20 - 6 - 1) +
                                       20 +
                                       6 +
                                       1),
    "Maximum length calculations incorrect");
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_initialize_error_handling_thread_local_storage(rcutils_allocator_t allocator);
__attribute__((visibility("default"))) void
rcutils_set_error_state(const char *error_string, const char *file, size_t line_number);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) bool
rcutils_error_is_set(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcutils_error_state_t *
rcutils_get_error_state(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_error_string_t
rcutils_get_error_string(void);

__attribute__((visibility("default"))) void
rcutils_reset_error(void);
struct rcutils_array_list_impl_t;

typedef struct rcutils_array_list_t
{
  struct rcutils_array_list_impl_t *impl;
} rcutils_array_list_t;
__attribute__((visibility("default")))
rcutils_array_list_t
rcutils_get_zero_initialized_array_list(void);
__attribute__((visibility("default")))
rcutils_ret_t
rcutils_array_list_init(
    rcutils_array_list_t *array_list,
    size_t initial_capacity,
    size_t data_size,
    const rcutils_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_array_list_fini(rcutils_array_list_t *array_list);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_array_list_add(rcutils_array_list_t *array_list, const void *data);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_array_list_set(rcutils_array_list_t *array_list, size_t index, const void *data);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_array_list_remove(rcutils_array_list_t *array_list, size_t index);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_array_list_get(const rcutils_array_list_t *array_list, size_t index, void *data);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_array_list_get_size(const rcutils_array_list_t *array_list, size_t *size);
typedef struct rcutils_char_array_t
{
  char *buffer;

  bool owns_buffer;

  size_t buffer_length;
  size_t buffer_capacity;
  rcutils_allocator_t allocator;
} rcutils_char_array_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_char_array_t
rcutils_get_zero_initialized_char_array(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_init(
    rcutils_char_array_t *char_array,
    size_t buffer_capacity,
    const rcutils_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_fini(rcutils_char_array_t *char_array);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_resize(rcutils_char_array_t *char_array, size_t new_size);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_expand_as_needed(rcutils_char_array_t *char_array, size_t new_size);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_vsprintf(rcutils_char_array_t *char_array, const char *format, va_list args);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_strncat(rcutils_char_array_t *char_array, const char *src, size_t n);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_strcat(rcutils_char_array_t *char_array, const char *src);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_memcpy(rcutils_char_array_t *char_array, const char *src, size_t n);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_char_array_strcpy(rcutils_char_array_t *char_array, const char *src);
struct rcutils_hash_map_impl_t;

typedef struct rcutils_hash_map_t
{
  struct rcutils_hash_map_impl_t *impl;
} rcutils_hash_map_t;

typedef size_t (*rcutils_hash_map_key_hasher_t)(
    const void *);
typedef int (*rcutils_hash_map_key_cmp_t)(
    const void *,
    const void *);
__attribute__((visibility("default")))
size_t
rcutils_hash_map_string_hash_func(const void *key_str);

__attribute__((visibility("default"))) int
rcutils_hash_map_string_cmp_func(const void *val1, const void *val2);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_hash_map_t
rcutils_get_zero_initialized_hash_map();
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_hash_map_init(
    rcutils_hash_map_t *hash_map,
    size_t initial_capacity,
    size_t key_size,
    size_t data_size,
    rcutils_hash_map_key_hasher_t key_hashing_func,
    rcutils_hash_map_key_cmp_t key_cmp_func,
    const rcutils_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_hash_map_fini(rcutils_hash_map_t *hash_map);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_hash_map_get_capacity(const rcutils_hash_map_t *hash_map, size_t *capacity);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_hash_map_get_size(const rcutils_hash_map_t *hash_map, size_t *size);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_hash_map_set(rcutils_hash_map_t *hash_map, const void *key, const void *value);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_hash_map_unset(rcutils_hash_map_t *hash_map, const void *key);
__attribute__((visibility("default"))) bool
rcutils_hash_map_key_exists(const rcutils_hash_map_t *hash_map, const void *key);
__attribute__((visibility("default")))
rcutils_ret_t
rcutils_hash_map_get(const rcutils_hash_map_t *hash_map, const void *key, void *data);
__attribute__((visibility("default")))
rcutils_ret_t
rcutils_hash_map_get_next_key_and_data(
    const rcutils_hash_map_t *hash_map,
    const void *previous_key,
    void *key,
    void *data);
typedef struct rcutils_string_array_t
{
  size_t size;
  char **data;
  rcutils_allocator_t allocator;
} rcutils_string_array_t;
__attribute__((visibility("default")))
rcutils_string_array_t
rcutils_get_zero_initialized_string_array(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_array_init(
    rcutils_string_array_t *string_array,
    size_t size,
    const rcutils_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_array_fini(rcutils_string_array_t *string_array);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_array_cmp(
    const rcutils_string_array_t *lhs,
    const rcutils_string_array_t *rhs,
    int *res);
struct rcutils_string_map_impl_t;

typedef struct rcutils_string_map_t
{
  struct rcutils_string_map_impl_t *impl;
} rcutils_string_map_t;
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_string_map_t
rcutils_get_zero_initialized_string_map();
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_init(
    rcutils_string_map_t *string_map,
    size_t initial_capacity,
    rcutils_allocator_t allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_fini(rcutils_string_map_t *string_map);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_get_capacity(const rcutils_string_map_t *string_map, size_t *capacity);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_get_size(const rcutils_string_map_t *string_map, size_t *size);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_reserve(rcutils_string_map_t *string_map, size_t capacity);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_clear(rcutils_string_map_t *string_map);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_set(rcutils_string_map_t *string_map, const char *key, const char *value);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_set_no_resize(
    rcutils_string_map_t *string_map,
    const char *key,
    const char *value);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_unset(rcutils_string_map_t *string_map, const char *key);
__attribute__((visibility("default"))) bool
rcutils_string_map_key_exists(const rcutils_string_map_t *string_map, const char *key);
__attribute__((visibility("default"))) bool
rcutils_string_map_key_existsn(
    const rcutils_string_map_t *string_map,
    const char *key,
    size_t key_length);
__attribute__((visibility("default")))
const char *
rcutils_string_map_get(const rcutils_string_map_t *string_map, const char *key);
__attribute__((visibility("default")))
const char *
rcutils_string_map_getn(
    const rcutils_string_map_t *string_map,
    const char *key,
    size_t key_length);
__attribute__((visibility("default")))
const char *
rcutils_string_map_get_next_key(
    const rcutils_string_map_t *string_map,
    const char *key);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_string_map_copy(
    const rcutils_string_map_t *src_string_map,
    rcutils_string_map_t *dst_string_map);

typedef struct rcutils_uint8_array_t
{
  uint8_t *buffer;
  size_t buffer_length;
  size_t buffer_capacity;
  rcutils_allocator_t allocator;
} rcutils_uint8_array_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_uint8_array_t
rcutils_get_zero_initialized_uint8_array(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_uint8_array_init(
    rcutils_uint8_array_t *uint8_array,
    size_t buffer_capacity,
    const rcutils_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_uint8_array_fini(rcutils_uint8_array_t *uint8_array);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_uint8_array_resize(rcutils_uint8_array_t *uint8_array, size_t new_size);
typedef int64_t rcutils_time_point_value_t;

typedef int64_t rcutils_duration_value_t;
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_system_time_now(rcutils_time_point_value_t *now);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_steady_time_now(rcutils_time_point_value_t *now);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_time_point_value_as_nanoseconds_string(
    const rcutils_time_point_value_t *time_point,
    char *str,
    size_t str_size);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_time_point_value_as_seconds_string(
    const rcutils_time_point_value_t *time_point,
    char *str,
    size_t str_size);
__attribute__((visibility("default"))) extern bool g_rcutils_logging_initialized;
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_logging_initialize_with_allocator(rcutils_allocator_t allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_logging_initialize(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_logging_shutdown(void);

typedef struct rcutils_log_location_t
{

  const char *function_name;

  const char *file_name;

  size_t line_number;
} rcutils_log_location_t;

enum RCUTILS_LOG_SEVERITY
{
  RCUTILS_LOG_SEVERITY_UNSET = 0,
  RCUTILS_LOG_SEVERITY_DEBUG = 10,
  RCUTILS_LOG_SEVERITY_INFO = 20,
  RCUTILS_LOG_SEVERITY_WARN = 30,
  RCUTILS_LOG_SEVERITY_ERROR = 40,
  RCUTILS_LOG_SEVERITY_FATAL = 50,
};

__attribute__((visibility("default"))) extern const char *const g_rcutils_log_severity_names[RCUTILS_LOG_SEVERITY_FATAL + 1];
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_logging_severity_level_from_string(
    const char *severity_string, rcutils_allocator_t allocator, int *severity);
typedef void (*rcutils_logging_output_handler_t)(
    const rcutils_log_location_t *,
    int,
    const char *,
    rcutils_time_point_value_t,
    const char *,
    va_list *);

__attribute__((visibility("default"))) extern rcutils_logging_output_handler_t g_rcutils_logging_output_handler;
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_logging_output_handler_t
rcutils_logging_get_output_handler();
__attribute__((visibility("default"))) void rcutils_logging_set_output_handler(rcutils_logging_output_handler_t function);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_logging_format_message(
    const rcutils_log_location_t *location,
    int severity, const char *name, rcutils_time_point_value_t timestamp,
    const char *msg, rcutils_char_array_t *logging_output);
__attribute__((visibility("default"))) extern int g_rcutils_logging_default_logger_level;
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcutils_logging_get_default_logger_level();
__attribute__((visibility("default"))) void rcutils_logging_set_default_logger_level(int level);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcutils_logging_get_logger_level(const char *name);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcutils_logging_get_logger_leveln(const char *name, size_t name_length);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_ret_t
rcutils_logging_set_logger_level(const char *name, int level);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) bool
rcutils_logging_logger_is_enabled_for(const char *name, int severity);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcutils_logging_get_logger_effective_level(const char *name);
__attribute__((visibility("default"))) void rcutils_log(
    const rcutils_log_location_t *location,
    int severity,
    const char *name,
    const char *format,
    ...)
    __attribute__((format(printf, 4, 5)));
__attribute__((visibility("default"))) void rcutils_logging_console_output_handler(
    const rcutils_log_location_t *location,
    int severity, const char *name, rcutils_time_point_value_t timestamp,
    const char *format, va_list *args);

typedef struct rmw_loaned_message_sequence_t
{
  void *message_sequence;
  size_t size;
  size_t capacity;
} rmw_loaned_message_sequence_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_loaned_message_sequence_t
rmw_get_zero_initialized_loaned_message_sequence(void);

typedef rcutils_uint8_array_t rmw_serialized_message_t;

typedef struct rmw_node_t
{
  const char *implementation_identifier;
  void *data;
  const char *name;
  const char *namespace_;
  rmw_context_t *context;
} rmw_node_t;

typedef struct rmw_publisher_options_t
{
  void *rmw_specific_publisher_payload;
} rmw_publisher_options_t;

typedef struct rmw_publisher_t
{
  const char *implementation_identifier;
  void *data;
  const char *topic_name;
  rmw_publisher_options_t options;
  bool can_loan_messages;
} rmw_publisher_t;

typedef struct rmw_subscription_options_t
{

  void *rmw_specific_subscription_payload;
  bool ignore_local_publications;
} rmw_subscription_options_t;

typedef struct rmw_subscription_t
{
  const char *implementation_identifier;
  void *data;
  const char *topic_name;
  rmw_subscription_options_t options;
  bool can_loan_messages;
} rmw_subscription_t;

typedef struct rmw_service_t
{
  const char *implementation_identifier;
  void *data;
  const char *service_name;
} rmw_service_t;

typedef struct rmw_client_t
{
  const char *implementation_identifier;
  void *data;
  const char *service_name;
} rmw_client_t;

typedef struct rmw_guard_condition_t
{
  const char *implementation_identifier;
  void *data;
  rmw_context_t *context;
} rmw_guard_condition_t;

typedef struct rmw_publisher_allocation_t
{
  const char *implementation_identifier;
  void *data;
} rmw_publisher_allocation_t;

typedef struct rmw_subscription_allocation_t
{
  const char *implementation_identifier;
  void *data;
} rmw_subscription_allocation_t;
typedef struct rmw_subscriptions_t
{

  size_t subscriber_count;

  void **subscribers;
} rmw_subscriptions_t;
typedef struct rmw_services_t
{

  size_t service_count;

  void **services;
} rmw_services_t;
typedef struct rmw_clients_t
{

  size_t client_count;

  void **clients;
} rmw_clients_t;

typedef struct rmw_events_t
{

  size_t event_count;

  void **events;
} rmw_events_t;
typedef struct rmw_guard_conditions_t
{

  size_t guard_condition_count;

  void **guard_conditions;
} rmw_guard_conditions_t;

typedef struct rmw_wait_set_t
{
  const char *implementation_identifier;
  rmw_guard_conditions_t *guard_conditions;
  void *data;
} rmw_wait_set_t;

typedef struct rmw_request_id_t
{
  int8_t writer_guid[16];
  int64_t sequence_number;
} rmw_request_id_t;

typedef struct rmw_time_t
{
  uint64_t sec;
  uint64_t nsec;
} rmw_time_t;

enum rmw_security_enforcement_policy_t
{
  RMW_SECURITY_ENFORCEMENT_PERMISSIVE,
  RMW_SECURITY_ENFORCEMENT_ENFORCE,
};

typedef struct rmw_node_security_options_t
{
  enum rmw_security_enforcement_policy_t enforce_security;
  const char *security_root_path;
} rmw_node_security_options_t;

enum rmw_qos_reliability_policy_t
{
  RMW_QOS_POLICY_RELIABILITY_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,
  RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
  RMW_QOS_POLICY_RELIABILITY_UNKNOWN
};

enum rmw_qos_history_policy_t
{
  RMW_QOS_POLICY_HISTORY_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,
  RMW_QOS_POLICY_HISTORY_KEEP_ALL,
  RMW_QOS_POLICY_HISTORY_UNKNOWN
};

enum rmw_qos_durability_policy_t
{
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
  RMW_QOS_POLICY_DURABILITY_VOLATILE,
  RMW_QOS_POLICY_DURABILITY_UNKNOWN
};

enum rmw_qos_liveliness_policy_t
{
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_LIVELINESS_AUTOMATIC,
  RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE,
  RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC,
  RMW_QOS_POLICY_LIVELINESS_UNKNOWN
};

typedef struct rmw_qos_profile_t
{
  enum rmw_qos_history_policy_t history;

  size_t depth;

  enum rmw_qos_reliability_policy_t reliability;

  enum rmw_qos_durability_policy_t durability;

  struct rmw_time_t deadline;

  struct rmw_time_t lifespan;

  enum rmw_qos_liveliness_policy_t liveliness;

  struct rmw_time_t liveliness_lease_duration;
  bool avoid_ros_namespace_conventions;
} rmw_qos_profile_t;

typedef struct rmw_gid_t
{
  const char *implementation_identifier;
  uint8_t data[24];
} rmw_gid_t;

typedef struct rmw_message_info_t
{

  rmw_gid_t publisher_gid;
  bool from_intra_process;
} rmw_message_info_t;

typedef struct rmw_message_info_sequence_t
{
  rmw_message_info_t *message_info_sequence;
  size_t size;
  size_t capacity;
} rmw_message_info_sequence_t;

enum
{
  RMW_QOS_POLICY_DEPTH_SYSTEM_DEFAULT = 0
};

typedef enum
{
  RMW_LOG_SEVERITY_DEBUG = RCUTILS_LOG_SEVERITY_DEBUG,
  RMW_LOG_SEVERITY_INFO = RCUTILS_LOG_SEVERITY_INFO,
  RMW_LOG_SEVERITY_WARN = RCUTILS_LOG_SEVERITY_WARN,
  RMW_LOG_SEVERITY_ERROR = RCUTILS_LOG_SEVERITY_ERROR,
  RMW_LOG_SEVERITY_FATAL = RCUTILS_LOG_SEVERITY_FATAL
} rmw_log_severity_t;

typedef struct rmw_liveliness_changed_status_t
{
  int32_t alive_count;
  int32_t not_alive_count;

  int32_t alive_count_change;

  int32_t not_alive_count_change;
} rmw_liveliness_changed_status_t;

typedef struct rmw_requested_deadline_missed_status_t
{

  int32_t total_count;

  int32_t total_count_change;
} rmw_requested_deadline_missed_status_t;

typedef struct rmw_liveliness_lost_status_t
{

  int32_t total_count;

  int32_t total_count_change;
} rmw_liveliness_lost_status_t;

typedef struct rmw_offered_deadline_missed_status_t
{

  int32_t total_count;

  int32_t total_count_change;
} rmw_offered_deadline_missed_status_t;

typedef rmw_ret_t rcl_ret_t;
typedef rmw_serialized_message_t rcl_serialized_message_t;
typedef struct rcl_bool_array_s
{
  bool *values;
  size_t size;
} rcl_bool_array_t;

typedef struct rcl_int64_array_s
{
  int64_t *values;
  size_t size;
} rcl_int64_array_t;

typedef struct rcl_double_array_s
{
  double *values;
  size_t size;
} rcl_double_array_t;

typedef struct rcl_byte_array_s
{
  uint8_t *values;
  size_t size;
} rcl_byte_array_t;

typedef struct rcl_variant_s
{
  bool *bool_value;
  int64_t *integer_value;
  double *double_value;
  char *string_value;
  rcl_byte_array_t *byte_array_value;
  rcl_bool_array_t *bool_array_value;
  rcl_int64_array_t *integer_array_value;
  rcl_double_array_t *double_array_value;
  rcutils_string_array_t *string_array_value;
} rcl_variant_t;

typedef struct rcl_node_params_s
{
  char **parameter_names;
  rcl_variant_t *parameter_values;
  size_t num_params;
} rcl_node_params_t;

typedef struct rcl_params_s
{
  char **node_names;
  rcl_node_params_t *params;
  size_t num_nodes;
  rcutils_allocator_t allocator;
} rcl_params_t;

struct rcl_arguments_impl_t;

typedef struct rcl_arguments_t
{

  struct rcl_arguments_impl_t *impl;
} rcl_arguments_t;
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_arguments_t
rcl_get_zero_initialized_arguments(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_parse_arguments(
    int argc,
    const char *const argv[],
    rcl_allocator_t allocator,
    rcl_arguments_t *args_output);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcl_arguments_get_count_unparsed(
    const rcl_arguments_t *args);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_arguments_get_unparsed(
    const rcl_arguments_t *args,
    rcl_allocator_t allocator,
    int **output_unparsed_indices);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcl_arguments_get_count_unparsed_ros(
    const rcl_arguments_t *args);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_arguments_get_unparsed_ros(
    const rcl_arguments_t *args,
    rcl_allocator_t allocator,
    int **output_unparsed_ros_indices);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) int
rcl_arguments_get_param_files_count(
    const rcl_arguments_t *args);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_arguments_get_param_files(
    const rcl_arguments_t *arguments,
    rcl_allocator_t allocator,
    char ***parameter_files);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_arguments_get_param_overrides(
    const rcl_arguments_t *arguments,
    rcl_params_t **parameter_overrides);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_remove_ros_arguments(
    char const *const argv[],
    const rcl_arguments_t *args,
    rcl_allocator_t allocator,
    int *nonros_argc,
    const char **nonros_argv[]);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_arguments_copy(
    const rcl_arguments_t *args,
    rcl_arguments_t *args_out);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_arguments_fini(
    rcl_arguments_t *args);
struct rcl_init_options_impl_t;

typedef struct rcl_init_options_t
{

  struct rcl_init_options_impl_t *impl;
} rcl_init_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_init_options_t
rcl_get_zero_initialized_init_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_init_options_init(rcl_init_options_t *init_options, rcl_allocator_t allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_init_options_copy(const rcl_init_options_t *src, rcl_init_options_t *dst);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_init_options_fini(rcl_init_options_t *init_options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_init_options_t *
rcl_init_options_get_rmw_init_options(rcl_init_options_t *init_options);
typedef uint64_t rcl_context_instance_id_t;

struct rcl_context_impl_t;
typedef struct rcl_context_t
{

  rcl_arguments_t global_arguments;

  struct rcl_context_impl_t *impl;
  alignas(8) uint8_t instance_id_storage[sizeof(uint_least64_t)];
} rcl_context_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_context_t
rcl_get_zero_initialized_context(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_context_fini(rcl_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_init_options_t *
rcl_context_get_init_options(rcl_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_context_instance_id_t
rcl_context_get_instance_id(rcl_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) bool
rcl_context_is_valid(rcl_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_context_t *
rcl_context_get_rmw_context(rcl_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_init(
    int argc,
    char const *const *argv,
    const rcl_init_options_t *options,
    rcl_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_shutdown(rcl_context_t *context);
typedef struct rcl_node_options_t
{
  size_t domain_id;

  rcl_allocator_t allocator;

  bool use_global_arguments;

  rcl_arguments_t arguments;
} rcl_node_options_t;
__attribute__((visibility("default")))
rcl_node_options_t
rcl_node_get_default_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_node_options_copy(
    const rcl_node_options_t *options,
    rcl_node_options_t *options_out);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_node_options_fini(rcl_node_options_t *options);

struct rcl_guard_condition_t;
struct rcl_node_impl_t;

typedef struct rcl_node_t
{

  rcl_context_t *context;

  struct rcl_node_impl_t *impl;
} rcl_node_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_node_t
rcl_get_zero_initialized_node(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_node_init(
    rcl_node_t *node,
    const char *name,
    const char *namespace_,
    rcl_context_t *context,
    const rcl_node_options_t *options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_node_fini(rcl_node_t *node);
__attribute__((visibility("default"))) bool
rcl_node_is_valid(const rcl_node_t *node);
__attribute__((visibility("default"))) bool
rcl_node_is_valid_except_context(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_node_get_name(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_node_get_namespace(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_node_get_fully_qualified_name(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_node_options_t *
rcl_node_get_options(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_node_get_domain_id(const rcl_node_t *node, size_t *domain_id);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_node_assert_liveliness(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_node_t *
rcl_node_get_rmw_handle(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
uint64_t
rcl_node_get_rcl_instance_id(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const struct rcl_guard_condition_t *
rcl_node_get_graph_guard_condition(const rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_node_get_logger_name(const rcl_node_t *node);

typedef struct rosidl_message_type_support_t rosidl_message_type_support_t;

typedef const rosidl_message_type_support_t *(*rosidl_message_typesupport_handle_function)(
    const rosidl_message_type_support_t *, const char *);

struct rosidl_message_type_support_t
{
  const char *typesupport_identifier;
  const void *data;
  rosidl_message_typesupport_handle_function func;
};

__attribute__((visibility("default")))
const rosidl_message_type_support_t *
get_message_typesupport_handle(
    const rosidl_message_type_support_t *handle, const char *identifier);

__attribute__((visibility("default")))
const rosidl_message_type_support_t *
get_message_typesupport_handle_function(
    const rosidl_message_type_support_t *handle, const char *identifier);

struct rcl_publisher_impl_t;

typedef struct rcl_publisher_t
{
  struct rcl_publisher_impl_t *impl;
} rcl_publisher_t;

typedef struct rcl_publisher_options_t
{

  rmw_qos_profile_t qos;

  rcl_allocator_t allocator;

  rmw_publisher_options_t rmw_publisher_options;
} rcl_publisher_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_publisher_t
rcl_get_zero_initialized_publisher(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publisher_init(
    rcl_publisher_t *publisher,
    const rcl_node_t *node,
    const rosidl_message_type_support_t *type_support,
    const char *topic_name,
    const rcl_publisher_options_t *options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publisher_fini(rcl_publisher_t *publisher, rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_publisher_options_t
rcl_publisher_get_default_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_borrow_loaned_message(
    const rcl_publisher_t *publisher,
    const rosidl_message_type_support_t *type_support,
    void **ros_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_return_loaned_message_from_publisher(
    const rcl_publisher_t *publisher,
    void *loaned_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publish(
    const rcl_publisher_t *publisher,
    const void *ros_message,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publish_serialized_message(
    const rcl_publisher_t *publisher,
    const rcl_serialized_message_t *serialized_message,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publish_loaned_message(
    const rcl_publisher_t *publisher,
    void *ros_message,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publisher_assert_liveliness(const rcl_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_publisher_get_topic_name(const rcl_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_publisher_options_t *
rcl_publisher_get_options(const rcl_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_publisher_t *
rcl_publisher_get_rmw_handle(const rcl_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_context_t *
rcl_publisher_get_context(const rcl_publisher_t *publisher);
__attribute__((visibility("default"))) bool
rcl_publisher_is_valid(const rcl_publisher_t *publisher);
__attribute__((visibility("default"))) bool
rcl_publisher_is_valid_except_context(const rcl_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rcl_publisher_get_subscription_count(
    const rcl_publisher_t *publisher,
    size_t *subscription_count);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rmw_qos_profile_t *
rcl_publisher_get_actual_qos(const rcl_publisher_t *publisher);

__attribute__((visibility("default"))) bool
rcl_publisher_can_loan_messages(const rcl_publisher_t *publisher);
struct rcl_subscription_impl_t;

typedef struct rcl_subscription_t
{
  struct rcl_subscription_impl_t *impl;
} rcl_subscription_t;

typedef struct rcl_subscription_options_t
{

  rmw_qos_profile_t qos;

  rcl_allocator_t allocator;

  rmw_subscription_options_t rmw_subscription_options;
} rcl_subscription_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_subscription_t
rcl_get_zero_initialized_subscription(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_subscription_init(
    rcl_subscription_t *subscription,
    const rcl_node_t *node,
    const rosidl_message_type_support_t *type_support,
    const char *topic_name,
    const rcl_subscription_options_t *options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_subscription_fini(rcl_subscription_t *subscription, rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_subscription_options_t
rcl_subscription_get_default_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_take(
    const rcl_subscription_t *subscription,
    void *ros_message,
    rmw_message_info_t *message_info,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_take_serialized_message(
    const rcl_subscription_t *subscription,
    rcl_serialized_message_t *serialized_message,
    rmw_message_info_t *message_info,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_take_loaned_message(
    const rcl_subscription_t *subscription,
    void **loaned_message,
    rmw_message_info_t *message_info,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_return_loaned_message_from_subscription(
    const rcl_subscription_t *subscription,
    void *loaned_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_subscription_get_topic_name(const rcl_subscription_t *subscription);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_subscription_options_t *
rcl_subscription_get_options(const rcl_subscription_t *subscription);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_subscription_t *
rcl_subscription_get_rmw_handle(const rcl_subscription_t *subscription);
__attribute__((visibility("default"))) bool
rcl_subscription_is_valid(const rcl_subscription_t *subscription);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rcl_subscription_get_publisher_count(
    const rcl_subscription_t *subscription,
    size_t *publisher_count);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rmw_qos_profile_t *
rcl_subscription_get_actual_qos(const rcl_subscription_t *subscription);

__attribute__((visibility("default"))) bool
rcl_subscription_can_loan_messages(const rcl_subscription_t *subscription);
typedef struct rosidl_service_type_support_t rosidl_service_type_support_t;

typedef const rosidl_service_type_support_t *(*rosidl_service_typesupport_handle_function)(
    const rosidl_service_type_support_t *, const char *);

struct rosidl_service_type_support_t
{
  const char *typesupport_identifier;
  const void *data;
  rosidl_service_typesupport_handle_function func;
};

__attribute__((visibility("default")))
const rosidl_service_type_support_t *
get_service_typesupport_handle(
    const rosidl_service_type_support_t *handle, const char *identifier);

__attribute__((visibility("default")))
const rosidl_service_type_support_t *
get_service_typesupport_handle_function(
    const rosidl_service_type_support_t *handle, const char *identifier);

struct rcl_client_impl_t;

typedef struct rcl_client_t
{
  struct rcl_client_impl_t *impl;
} rcl_client_t;

typedef struct rcl_client_options_t
{

  rmw_qos_profile_t qos;

  rcl_allocator_t allocator;
} rcl_client_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_client_t
rcl_get_zero_initialized_client(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_client_init(
    rcl_client_t *client,
    const rcl_node_t *node,
    const rosidl_service_type_support_t *type_support,
    const char *service_name,
    const rcl_client_options_t *options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_client_fini(rcl_client_t *client, rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_client_options_t
rcl_client_get_default_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_send_request(const rcl_client_t *client, const void *ros_request, int64_t *sequence_number);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_take_response(
    const rcl_client_t *client,
    rmw_request_id_t *request_header,
    void *ros_response);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_client_get_service_name(const rcl_client_t *client);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_client_options_t *
rcl_client_get_options(const rcl_client_t *client);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_client_t *
rcl_client_get_rmw_handle(const rcl_client_t *client);
__attribute__((visibility("default"))) bool
rcl_client_is_valid(const rcl_client_t *client);
struct rcl_guard_condition_impl_t;

typedef struct rcl_guard_condition_t
{

  rcl_context_t *context;

  struct rcl_guard_condition_impl_t *impl;
} rcl_guard_condition_t;

typedef struct rcl_guard_condition_options_t
{

  rcl_allocator_t allocator;
} rcl_guard_condition_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_guard_condition_t
rcl_get_zero_initialized_guard_condition(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_guard_condition_init(
    rcl_guard_condition_t *guard_condition,
    rcl_context_t *context,
    const rcl_guard_condition_options_t options);
rcl_ret_t
rcl_guard_condition_init_from_rmw(
    rcl_guard_condition_t *guard_condition,
    const rmw_guard_condition_t *rmw_guard_condition,
    rcl_context_t *context,
    const rcl_guard_condition_options_t options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_guard_condition_fini(rcl_guard_condition_t *guard_condition);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_guard_condition_options_t
rcl_guard_condition_get_default_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_trigger_guard_condition(rcl_guard_condition_t *guard_condition);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_guard_condition_options_t *
rcl_guard_condition_get_options(const rcl_guard_condition_t *guard_condition);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_guard_condition_t *
rcl_guard_condition_get_rmw_handle(const rcl_guard_condition_t *guard_condition);

struct rcl_service_impl_t;

typedef struct rcl_service_t
{
  struct rcl_service_impl_t *impl;
} rcl_service_t;

typedef struct rcl_service_options_t
{

  rmw_qos_profile_t qos;

  rcl_allocator_t allocator;
} rcl_service_options_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_service_t
rcl_get_zero_initialized_service(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_service_init(
    rcl_service_t *service,
    const rcl_node_t *node,
    const rosidl_service_type_support_t *type_support,
    const char *service_name,
    const rcl_service_options_t *options);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_service_fini(rcl_service_t *service, rcl_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_service_options_t
rcl_service_get_default_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_take_request(
    const rcl_service_t *service,
    rmw_request_id_t *request_header,
    void *ros_request);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_send_response(
    const rcl_service_t *service,
    rmw_request_id_t *response_header,
    void *ros_response);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rcl_service_get_service_name(const rcl_service_t *service);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rcl_service_options_t *
rcl_service_get_options(const rcl_service_t *service);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_service_t *
rcl_service_get_rmw_handle(const rcl_service_t *service);
__attribute__((visibility("default"))) bool
rcl_service_is_valid(const rcl_service_t *service);

typedef rcutils_time_point_value_t rcl_time_point_value_t;

typedef rcutils_duration_value_t rcl_duration_value_t;

typedef enum rcl_clock_type_t
{
  RCL_CLOCK_UNINITIALIZED = 0,
  RCL_ROS_TIME,
  RCL_SYSTEM_TIME,
  RCL_STEADY_TIME
} rcl_clock_type_t;

typedef struct rcl_duration_t
{
  rcl_duration_value_t nanoseconds;
} rcl_duration_t;

typedef enum rcl_clock_change_t
{

  RCL_ROS_TIME_NO_CHANGE = 1,

  RCL_ROS_TIME_ACTIVATED = 2,

  RCL_ROS_TIME_DEACTIVATED = 3,

  RCL_SYSTEM_TIME_NO_CHANGE = 4
} rcl_clock_change_t;

typedef struct rcl_time_jump_t
{

  rcl_clock_change_t clock_change;

  rcl_duration_t delta;
} rcl_time_jump_t;

typedef void (*rcl_jump_callback_t)(
    const struct rcl_time_jump_t *time_jump,
    bool before_jump,
    void *user_data);

typedef struct rcl_jump_threshold_t
{

  bool on_clock_change;

  rcl_duration_t min_forward;

  rcl_duration_t min_backward;
} rcl_jump_threshold_t;

typedef struct rcl_jump_callback_info_t
{
  rcl_jump_callback_t callback;
  rcl_jump_threshold_t threshold;
  void *user_data;
} rcl_jump_callback_info_t;

typedef struct rcl_clock_t
{
  enum rcl_clock_type_t type;

  rcl_jump_callback_info_t *jump_callbacks;

  size_t num_jump_callbacks;
  rcl_ret_t (*get_now)(void *data, rcl_time_point_value_t *now);

  void *data;
  rcl_allocator_t allocator;
} rcl_clock_t;

typedef struct rcl_time_point_t
{
  rcl_time_point_value_t nanoseconds;
  rcl_clock_type_t clock_type;
} rcl_time_point_t;
__attribute__((visibility("default")))
__attribute__((warn_unused_result)) bool
rcl_clock_valid(rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_clock_init(
    enum rcl_clock_type_t clock_type, rcl_clock_t *clock,
    rcl_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_clock_fini(
    rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_ros_clock_init(
    rcl_clock_t *clock,
    rcl_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_ros_clock_fini(
    rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_steady_clock_init(
    rcl_clock_t *clock,
    rcl_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_steady_clock_fini(
    rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_system_clock_init(
    rcl_clock_t *clock,
    rcl_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_system_clock_fini(
    rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_difference_times(
    rcl_time_point_t *start, rcl_time_point_t *finish, rcl_duration_t *delta);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_clock_get_now(rcl_clock_t *clock, rcl_time_point_value_t *time_point_value);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_enable_ros_time_override(rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_disable_ros_time_override(rcl_clock_t *clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_is_enabled_ros_time_override(
    rcl_clock_t *clock, bool *is_enabled);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_set_ros_time_override(
    rcl_clock_t *clock, rcl_time_point_value_t time_value);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_clock_add_jump_callback(
    rcl_clock_t *clock, rcl_jump_threshold_t threshold, rcl_jump_callback_t callback,
    void *user_data);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_clock_remove_jump_callback(
    rcl_clock_t *clock, rcl_jump_callback_t callback, void *user_data);

typedef struct rosidl_message_bounds_t rosidl_message_bounds_t;

typedef const rosidl_message_bounds_t *(*rosidl_message_bounds_handle_function)(
    const rosidl_message_bounds_t *, const char *);

struct rosidl_message_bounds_t
{
  const char *typesupport_identifier;
  const void *data;
  rosidl_message_bounds_handle_function func;
};

__attribute__((visibility("default")))
const rosidl_message_bounds_t *
get_message_bounds_handle(
    const rosidl_message_bounds_t *handle, const char *identifier);

__attribute__((visibility("default")))
const rosidl_message_bounds_t *
get_message_bounds_handle_function(
    const rosidl_message_bounds_t *handle, const char *identifier);

static const rmw_qos_profile_t rmw_qos_profile_sensor_data =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        5,
        RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        {0, 0},
        {0, 0},
        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
        {0, 0},
        false};

static const rmw_qos_profile_t rmw_qos_profile_parameters =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        1000,
        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        {0, 0},
        {0, 0},
        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
        {0, 0},
        false};

static const rmw_qos_profile_t rmw_qos_profile_default =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        10,
        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        {0, 0},
        {0, 0},
        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
        {0, 0},
        false};

static const rmw_qos_profile_t rmw_qos_profile_services_default =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        10,
        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        {0, 0},
        {0, 0},
        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
        {0, 0},
        false};

static const rmw_qos_profile_t rmw_qos_profile_parameter_events =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        1000,
        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        {0, 0},
        {0, 0},
        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
        {0, 0},
        false};

static const rmw_qos_profile_t rmw_qos_profile_system_default =
    {
        RMW_QOS_POLICY_HISTORY_SYSTEM_DEFAULT,
        RMW_QOS_POLICY_DEPTH_SYSTEM_DEFAULT,
        RMW_QOS_POLICY_RELIABILITY_SYSTEM_DEFAULT,
        RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT,
        {0, 0},
        {0, 0},
        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
        {0, 0},
        false};
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_subscription_options_t
rmw_get_default_subscription_options(void);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rmw_get_implementation_identifier(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const char *
rmw_get_serialization_format(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_node_t *
rmw_create_node(
    rmw_context_t *context,
    const char *name,
    const char *namespace_,
    size_t domain_id,
    const rmw_node_security_options_t *security_options,
    bool localhost_only);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_node(rmw_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_node_assert_liveliness(const rmw_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
const rmw_guard_condition_t *
rmw_node_get_graph_guard_condition(const rmw_node_t *node);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_init_publisher_allocation(
    const rosidl_message_type_support_t *type_support,
    const rosidl_message_bounds_t *message_bounds,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_fini_publisher_allocation(
    rmw_publisher_allocation_t *allocation);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_publisher_options_t
rmw_get_default_publisher_options(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_publisher_t *
rmw_create_publisher(
    const rmw_node_t *node,
    const rosidl_message_type_support_t *type_support,
    const char *topic_name,
    const rmw_qos_profile_t *qos_policies,
    const rmw_publisher_options_t *publisher_options);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_publisher(rmw_node_t *node, rmw_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_borrow_loaned_message(
    const rmw_publisher_t *publisher,
    const rosidl_message_type_support_t *type_support,
    void **ros_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_return_loaned_message_from_publisher(
    const rmw_publisher_t *publisher,
    void *loaned_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_publish(
    const rmw_publisher_t *publisher,
    const void *ros_message,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_publish_loaned_message(
    const rmw_publisher_t *publisher,
    void *ros_message,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_publisher_count_matched_subscriptions(
    const rmw_publisher_t *publisher,
    size_t *subscription_count);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_publisher_get_actual_qos(
    const rmw_publisher_t *publisher,
    rmw_qos_profile_t *qos);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_publish_serialized_message(
    const rmw_publisher_t *publisher,
    const rmw_serialized_message_t *serialized_message,
    rmw_publisher_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_get_serialized_message_size(
    const rosidl_message_type_support_t *type_support,
    const rosidl_message_bounds_t *message_bounds,
    size_t *size);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_publisher_assert_liveliness(const rmw_publisher_t *publisher);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_serialize(
    const void *ros_message,
    const rosidl_message_type_support_t *type_support,
    rmw_serialized_message_t *serialized_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_deserialize(
    const rmw_serialized_message_t *serialized_message,
    const rosidl_message_type_support_t *type_support,
    void *ros_message);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_init_subscription_allocation(
    const rosidl_message_type_support_t *type_support,
    const rosidl_message_bounds_t *message_bounds,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_fini_subscription_allocation(
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_subscription_t *
rmw_create_subscription(
    const rmw_node_t *node,
    const rosidl_message_type_support_t *type_support,
    const char *topic_name,
    const rmw_qos_profile_t *qos_policies,
    const rmw_subscription_options_t *subscription_options);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_subscription(rmw_node_t *node, rmw_subscription_t *subscription);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_subscription_count_matched_publishers(
    const rmw_subscription_t *subscription,
    size_t *publisher_count);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_subscription_get_actual_qos(
    const rmw_subscription_t *subscription,
    rmw_qos_profile_t *qos);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take(
    const rmw_subscription_t *subscription,
    void *ros_message,
    bool *taken,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_with_info(
    const rmw_subscription_t *subscription,
    void *ros_message,
    bool *taken,
    rmw_message_info_t *message_info,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_serialized_message(
    const rmw_subscription_t *subscription,
    rmw_serialized_message_t *serialized_message,
    bool *taken,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_serialized_message_with_info(
    const rmw_subscription_t *subscription,
    rmw_serialized_message_t *serialized_message,
    bool *taken,
    rmw_message_info_t *message_info,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_loaned_message(
    const rmw_subscription_t *subscription,
    void **loaned_message,
    bool *taken,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_loaned_message_with_info(
    const rmw_subscription_t *subscription,
    void **loaned_message,
    bool *taken,
    rmw_message_info_t *message_info,
    rmw_subscription_allocation_t *allocation);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_return_loaned_message_from_subscription(
    const rmw_subscription_t *subscription,
    void *loaned_message);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_client_t *
rmw_create_client(
    const rmw_node_t *node,
    const rosidl_service_type_support_t *type_support,
    const char *service_name,
    const rmw_qos_profile_t *qos_policies);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_client(rmw_node_t *node, rmw_client_t *client);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_send_request(
    const rmw_client_t *client,
    const void *ros_request,
    int64_t *sequence_id);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_response(
    const rmw_client_t *client,
    rmw_request_id_t *request_header,
    void *ros_response,
    bool *taken);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_service_t *
rmw_create_service(
    const rmw_node_t *node,
    const rosidl_service_type_support_t *type_support,
    const char *service_name,
    const rmw_qos_profile_t *qos_policies);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_service(rmw_node_t *node, rmw_service_t *service);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_take_request(
    const rmw_service_t *service,
    rmw_request_id_t *request_header,
    void *ros_request,
    bool *taken);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_send_response(
    const rmw_service_t *service,
    rmw_request_id_t *request_header,
    void *ros_response);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_guard_condition_t *
rmw_create_guard_condition(rmw_context_t *context);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_guard_condition(rmw_guard_condition_t *guard_condition);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_trigger_guard_condition(const rmw_guard_condition_t *guard_condition);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_wait_set_t *
rmw_create_wait_set(rmw_context_t *context, size_t max_conditions);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_destroy_wait_set(rmw_wait_set_t *wait_set);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_wait(
    rmw_subscriptions_t *subscriptions,
    rmw_guard_conditions_t *guard_conditions,
    rmw_services_t *services,
    rmw_clients_t *clients,
    rmw_events_t *events,
    rmw_wait_set_t *wait_set,
    const rmw_time_t *wait_timeout);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_get_node_names(
    const rmw_node_t *node,
    rcutils_string_array_t *node_names,
    rcutils_string_array_t *node_namespaces);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_count_publishers(
    const rmw_node_t *node,
    const char *topic_name,
    size_t *count);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_count_subscribers(
    const rmw_node_t *node,
    const char *topic_name,
    size_t *count);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_get_gid_for_publisher(const rmw_publisher_t *publisher, rmw_gid_t *gid);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_compare_gids_equal(const rmw_gid_t *gid1, const rmw_gid_t *gid2, bool *result);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_service_server_is_available(
    const rmw_node_t *node,
    const rmw_client_t *client,
    bool *is_available);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_ret_t
rmw_set_log_severity(rmw_log_severity_t severity);

struct rcl_clock_t;
struct rcl_timer_impl_t;

typedef struct rcl_timer_t
{

  struct rcl_timer_impl_t *impl;
} rcl_timer_t;
typedef void (*rcl_timer_callback_t)(rcl_timer_t *, int64_t);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_timer_t
rcl_get_zero_initialized_timer(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_init(
    rcl_timer_t *timer,
    rcl_clock_t *clock,
    rcl_context_t *context,
    int64_t period,
    const rcl_timer_callback_t callback,
    rcl_allocator_t allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_fini(rcl_timer_t *timer);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_call(rcl_timer_t *timer);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_clock(rcl_timer_t *timer, rcl_clock_t **clock);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_is_ready(const rcl_timer_t *timer, bool *is_ready);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_get_time_until_next_call(const rcl_timer_t *timer, int64_t *time_until_next_call);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_get_time_since_last_call(const rcl_timer_t *timer, int64_t *time_since_last_call);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_get_period(const rcl_timer_t *timer, int64_t *period);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_exchange_period(const rcl_timer_t *timer, int64_t new_period, int64_t *old_period);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_timer_callback_t
rcl_timer_get_callback(const rcl_timer_t *timer);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_timer_callback_t
rcl_timer_exchange_callback(rcl_timer_t *timer, const rcl_timer_callback_t new_callback);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_cancel(rcl_timer_t *timer);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_is_canceled(const rcl_timer_t *timer, bool *is_canceled);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_timer_reset(rcl_timer_t *timer);
const rcl_allocator_t *
rcl_timer_get_allocator(const rcl_timer_t *timer);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_guard_condition_t *
rcl_timer_get_guard_condition(const rcl_timer_t *timer);
typedef enum rcl_publisher_event_type_t
{
  RCL_PUBLISHER_OFFERED_DEADLINE_MISSED,
  RCL_PUBLISHER_LIVELINESS_LOST
} rcl_publisher_event_type_t;

typedef enum rcl_subscription_event_type_t
{
  RCL_SUBSCRIPTION_REQUESTED_DEADLINE_MISSED,
  RCL_SUBSCRIPTION_LIVELINESS_CHANGED
} rcl_subscription_event_type_t;

typedef struct rmw_event_t rmw_event_t;

struct rcl_event_impl_t;

typedef struct rcl_event_t
{
  struct rcl_event_impl_t *impl;
} rcl_event_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_event_t
rcl_get_zero_initialized_event(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_publisher_event_init(
    rcl_event_t *event,
    const rcl_publisher_t *publisher,
    const rcl_publisher_event_type_t event_type);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_subscription_event_init(
    rcl_event_t *event,
    const rcl_subscription_t *subscription,
    const rcl_subscription_event_type_t event_type);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_take_event(
    const rcl_event_t *event,
    void *event_info);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_event_fini(rcl_event_t *event);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rmw_event_t *
rcl_event_get_rmw_handle(const rcl_event_t *event);

struct rcl_wait_set_impl_t;

typedef struct rcl_wait_set_t
{

  const rcl_subscription_t **subscriptions;
  size_t size_of_subscriptions;

  const rcl_guard_condition_t **guard_conditions;
  size_t size_of_guard_conditions;

  const rcl_timer_t **timers;
  size_t size_of_timers;

  const rcl_client_t **clients;
  size_t size_of_clients;

  const rcl_service_t **services;
  size_t size_of_services;

  const rcl_event_t **events;
  size_t size_of_events;

  struct rcl_wait_set_impl_t *impl;
} rcl_wait_set_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_wait_set_t
rcl_get_zero_initialized_wait_set(void);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_init(
    rcl_wait_set_t *wait_set,
    size_t number_of_subscriptions,
    size_t number_of_guard_conditions,
    size_t number_of_timers,
    size_t number_of_clients,
    size_t number_of_services,
    size_t number_of_events,
    rcl_context_t *context,
    rcl_allocator_t allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_fini(rcl_wait_set_t *wait_set);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_get_allocator(const rcl_wait_set_t *wait_set, rcl_allocator_t *allocator);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_add_subscription(
    rcl_wait_set_t *wait_set,
    const rcl_subscription_t *subscription,
    size_t *index);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_clear(rcl_wait_set_t *wait_set);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_resize(
    rcl_wait_set_t *wait_set,
    size_t subscriptions_size,
    size_t guard_conditions_size,
    size_t timers_size,
    size_t clients_size,
    size_t services_size,
    size_t events_size);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_add_guard_condition(
    rcl_wait_set_t *wait_set,
    const rcl_guard_condition_t *guard_condition,
    size_t *index);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_add_timer(
    rcl_wait_set_t *wait_set,
    const rcl_timer_t *timer,
    size_t *index);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_add_client(
    rcl_wait_set_t *wait_set,
    const rcl_client_t *client,
    size_t *index);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_add_service(
    rcl_wait_set_t *wait_set,
    const rcl_service_t *service,
    size_t *index);

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait_set_add_event(
    rcl_wait_set_t *wait_set,
    const rcl_event_t *event,
    size_t *index);
__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcl_ret_t
rcl_wait(rcl_wait_set_t *wait_set, int64_t timeout);
