//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class APContactInfo, DTRpcAsyncCaller, NSArray, NSString, UIViewController;

@protocol APProfileService <DTService>
- (void)getFeedCardStatusWithBizTypes:(NSArray *)arg1 resultBlock:(void (^)(_Bool, NSString *, NSDictionary *))arg2;
- (UIViewController *)getFriendsConfigController;
- (void)setContactRemark:(APContactInfo *)arg1 callback:(void (^)(NSString *, _Bool))arg2;
- (DTRpcAsyncCaller *)getPersonalSloganWithCallback:(void (^)(_Bool, NSString *, NSString *))arg1;
- (NSString *)getCachedPersonalSlogan;
- (void)setPersonalSloganWithCallback:(void (^)(NSString *, _Bool))arg1;
@end
