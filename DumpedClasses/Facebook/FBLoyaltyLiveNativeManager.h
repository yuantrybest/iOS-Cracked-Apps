//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/RCTEventEmitter.h>

#import "RCTBridgeModule-Protocol.h"

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface FBLoyaltyLiveNativeManager : RCTEventEmitter <RCTBridgeModule>
{
}

+ (id)__rct_export__620;
+ (id)punchResponseToDictionary:(id)arg1;
+ (void)load;
+ (id)moduleName;
- (id)supportedEvents;
- (void)subscribeToPunches;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

