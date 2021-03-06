//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QYRNReactNativeStorageAdapter;

@interface QYCMBaselinePluginManager : NSObject
{
    QYRNReactNativeStorageAdapter *_storageHandler;
    NSString *_userId;
    NSString *_userCookie;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *userCookie; // @synthesize userCookie=_userCookie;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) QYRNReactNativeStorageAdapter *storageHandler; // @synthesize storageHandler=_storageHandler;
- (void).cxx_destruct;
- (id)transportBaselinePushHistories:(id)arg1;
- (id)transportPushHistories:(id)arg1;
- (id)transportPushFavorites:(id)arg1;
- (id)transportHistories:(id)arg1;
- (id)transportFavorites:(id)arg1;
- (void)refreshUserInfo;
- (void)saveLogoutStatus;
- (void)updateHistoryCompletion:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)deleteHistory:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)deleteFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)presetComic:(CDUnknownBlockType)arg1;
- (void)getOfflines:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)getHistories:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)getFavorites:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

