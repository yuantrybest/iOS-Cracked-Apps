//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBProtileAnalytics : NSObject
{
    NSString *_profileSessionID;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (id)_extrasWithProtileAnalyticsInfo:(id)arg1 extraInfos:(id)arg2;
- (void)_logWithEvent:(id)arg1 protileAnalyticsInfo:(id)arg2 extraInfos:(id)arg3;
- (void)logProtileFooterTapWithProtileAnalyticsInfo:(id)arg1;
- (void)logProtileHeaderTapWithProtileAnalyticsInfo:(id)arg1;
- (void)logProtileItemTapWithProtileAnalyticsInfo:(id)arg1 extraInfos:(id)arg2;
- (void)logProtileViewWithProtileAnalyticsInfo:(id)arg1 duration:(double)arg2 extraInfos:(id)arg3;
- (id)initWithProfileSessionID:(id)arg1 analyticsModule:(id)arg2;

@end
