#ifndef _APP_VERSION_H_
#define _APP_VERSION_H_

/*  values come from cmake/version.cmake
 * BUILD_VERSION related  values will be 'git describe',
 * alternatively user defined BUILD_VERSION.
 */

/* #undef ZEPHYR_VERSION_CODE */
/* #undef ZEPHYR_VERSION */

#define APPVERSION          0x30000
#define APP_VERSION_NUMBER  0x300
#define APP_VERSION_MAJOR   0
#define APP_VERSION_MINOR   3
#define APP_PATCHLEVEL      0
#define APP_VERSION_STRING  "0.3.0"

#define APP_BUILD_VERSION 4493783ef88c


#endif /* _APP_VERSION_H_ */
