//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBInAppNotifyModel;

@protocol TBInAppPushProtocol <NSObject>
- (void)setPushStates:(_Bool)arg1;
- (_Bool)pushStatus;
- (void)pushNotifyMessage:(TBInAppNotifyModel *)arg1;
- (void)removeBizConfig:(NSString *)arg1;
- (void)addBizConfig:(id <TBInAppPushBizConfigProtocol>)arg1;
@end

