//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller;

@interface DRPageConfigUpdateManager : NSObject
{
    DTRpcAsyncCaller *_currentCaller;
}

+ (id)DRConfigFromService;
+ (_Bool)IfForceRefreshConfig;
+ (_Bool)IfDynamicRouterSwitchOn;
+ (_Bool)IfDynamicRouterSwitchOff;
+ (_Bool)IfNeedUpdateRouter;
+ (_Bool)IfAccountChanged;
+ (id)restoreLastUserId;
+ (void)cacheLastUserId:(id)arg1;
+ (id)restoreClearSwitch;
+ (void)cacheClearSwitch:(id)arg1;
+ (id)restoreLastModifyTime;
+ (void)cacheLastModifyTime:(long long)arg1;
+ (void)handleLoginSuccess:(id)arg1;
+ (void)start;
+ (void)registerNofication;
+ (void)load;
+ (id)sharedInstance;
@property(retain, nonatomic) DTRpcAsyncCaller *currentCaller; // @synthesize currentCaller=_currentCaller;
- (void).cxx_destruct;
- (void)updatePageConfigurationRPC:(CDUnknownBlockType)arg1 needClearDb:(_Bool)arg2;
- (void)updatePageConfigurationRPC:(CDUnknownBlockType)arg1;
- (void)updatePageConfiguration;
- (void)dealloc;

@end

