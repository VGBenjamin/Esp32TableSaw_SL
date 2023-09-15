#ifndef NVS_HELPER_H
#define NVS_HELPER_H

#include <nvs_flash.h>
#include <esp_err.h>

class NVSHelper {
public:
  NVSHelper(const char* namespaceName);
  esp_err_t save(const char* key, int32_t value);
  esp_err_t load(const char* key, int32_t& value);

private:
  const char* _namespaceName;
};

#endif // NVS_HELPER_H
