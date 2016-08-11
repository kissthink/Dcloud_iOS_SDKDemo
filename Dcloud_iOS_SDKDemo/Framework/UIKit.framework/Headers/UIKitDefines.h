//
//  UIKitDefines.h
//  UIKit
//
//  Copyright (c) 2007-2015 Apple Inc. All rights reserved.
//

#import <Availability.h>

#ifdef __cplusplus
#define UIKIT_EXTERN		extern "C" __attribute__((visibility ("default")))
#else
#define UIKIT_EXTERN	        extern __attribute__((visibility ("default")))
#endif

#define UIKIT_STATIC_INLINE	static inline

#define UIKIT_AVAILABLE_IOS_ONLY(vers)      __IOS_AVAILABLE(vers) __WATCHOS_UNAVAILABLE __TVOS_UNAVAILABLE
#define UIKIT_AVAILABLE_WATCHOS_ONLY(vers)  __IOS_UNAVAILABLE __WATCHOS_AVAILABLE(vers) __TVOS_UNAVAILABLE
#define UIKIT_AVAILABLE_TVOS_ONLY(vers)     __IOS_UNAVAILABLE __WATCHOS_UNAVAILABLE __TVOS_AVAILABLE(vers)
#define UIKIT_AVAILABLE_IOS_TVOS(_ios, _tvos) __IOS_AVAILABLE(_ios) __WATCHOS_UNAVAILABLE __TVOS_AVAILABLE(_tvos)
#define UIKIT_AVAILABLE_IOS_WATCHOS_TVOS(_ios, _watchos, _tvos) __IOS_AVAILABLE(_ios) __WATCHOS_AVAILABLE(_watchos) __TVOS_AVAILABLE(_tvos)

#define UIKIT_CLASS_AVAILABLE_TVOS_ONLY(vers) UIKIT_EXTERN __IOS_UNAVAILABLE __WATCHOS_UNAVAILABLE __TVOS_AVAILABLE(vers)
#define UIKIT_CLASS_AVAILABLE_IOS_TVOS(_ios, _tvos) UIKIT_EXTERN __IOS_AVAILABLE(_ios) __WATCHOS_UNAVAILABLE __TVOS_AVAILABLE(_tvos)
#define UIKIT_CLASS_AVAILABLE_IOS_WATCHOS_TVOS(_ios, _watchos, _tvos) UIKIT_EXTERN __IOS_AVAILABLE(_ios) __WATCHOS_AVAILABLE(_watchos) __TVOS_AVAILABLE(_tvos)
