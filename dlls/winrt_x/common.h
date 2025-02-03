#pragma once
#define PRINT_FUNCTION_NAME() printf("[%s]\n", __FUNCSIG__)
#define CONVERT_TO_HSTRING(str) winrt::hstring(std::wstring(str, (str) + strlen(str)))


#define MEMBER_ID                               1234567890  // NOLINT(modernize-macro-to-enum)
#define TEAM_ID                                 CONVERT_TO_HSTRING("0987654321")
#define XBOX_USER_ID                            CONVERT_TO_HSTRING("0987612345")
#define CUSTOM_JSON_CONSTANTS                   CONVERT_TO_HSTRING("{}")
#define CUSTOM_JSON_PROPS                       CONVERT_TO_HSTRING("{}")
#define SECURE_BASE_64                          CONVERT_TO_HSTRING("1234567890qwerty")
#define GAMERTAG                                CONVERT_TO_HSTRING("Durangler")
#define RESULTS_SERVER_MEASUREMENTS_JSON        CONVERT_TO_HSTRING("{}")
#define SERVER_MEASUREMENTS_JSON                CONVERT_TO_HSTRING("{}")
#define DEVICE_ID                               CONVERT_TO_HSTRING("device01234567890")
#define ACTIVE_TITLE_ID                         69420  // NOLINT(modernize-macro-to-enum)