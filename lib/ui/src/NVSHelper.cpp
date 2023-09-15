#include "NVSHelper.h"
#include "nvs_flash.h"

NVSHelper::NVSHelper(const char* namespaceName) : _namespaceName(namespaceName) {
  nvs_flash_init();
}

esp_err_t NVSHelper::save(const char* key, int32_t value) {
  nvs_handle_t my_handle;
  esp_err_t err = nvs_open(_namespaceName, NVS_READWRITE, &my_handle);
  if (err != ESP_OK) {
    return err;
  }

  err = nvs_set_int(my_handle, key, value);
  if (err != ESP_OK) {
    nvs_close(my_handle);
    return err;
  }

  err = nvs_commit(my_handle);
  nvs_close(my_handle);

  return err;
}

esp_err_t NVSHelper::load(const char* key, int32_t& value) {
  nvs_handle_t my_handle;
  esp_err_t err = nvs_open(_namespaceName, NVS_READONLY, &my_handle);
  if (err != ESP_OK) {
    return err;
  }

  err = nvs_get_int(my_handle, key, &value);
  nvs_close(my_handle);

  return err;
}
