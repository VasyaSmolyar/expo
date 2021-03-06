//  Copyright © 2018 650 Industries. All rights reserved.

#import <ABI39_0_0UMCore/ABI39_0_0UMExportedModule.h>
#import <ABI39_0_0UMCore/ABI39_0_0UMModuleRegistryConsumer.h>
#import <Foundation/Foundation.h>
#import <ABI39_0_0UMCore/ABI39_0_0UMEventEmitter.h>
#import <ABI39_0_0UMCore/ABI39_0_0UMEventEmitterService.h>

NS_ASSUME_NONNULL_BEGIN

// Keep this enum in sync with JavaScript
typedef NS_ENUM(NSInteger, ABI39_0_0EXBatteryState) {
  ABI39_0_0EXBatteryStateUnknown = 0,
  ABI39_0_0EXBatteryStateUnplugged,
  ABI39_0_0EXBatteryStateCharging,
  ABI39_0_0EXBatteryStateFull
};


@interface ABI39_0_0EXBattery : ABI39_0_0UMExportedModule <ABI39_0_0UMModuleRegistryConsumer, ABI39_0_0UMEventEmitter>

@end

NS_ASSUME_NONNULL_END
