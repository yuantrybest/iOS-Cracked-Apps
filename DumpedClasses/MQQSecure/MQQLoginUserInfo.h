//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQLoginManagerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIImage;

@interface MQQLoginUserInfo : NSObject <MQQLoginManagerDelegate>
{
    long long _refreshSigType;
    _Bool _isOnline;
    long long _uin;
    NSString *_mainAccount;
    NSString *_nickName;
    unsigned long long _age;
    unsigned long long _gender;
    UIImage *_qqFaceImage;
    NSString *_qqFaceImageUrlString;
    NSMutableDictionary *_sigDict;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableDictionary *sigDict; // @synthesize sigDict=_sigDict;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(copy, nonatomic) NSString *qqFaceImageUrlString; // @synthesize qqFaceImageUrlString=_qqFaceImageUrlString;
@property(retain, nonatomic) UIImage *qqFaceImage; // @synthesize qqFaceImage=_qqFaceImage;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *mainAccount; // @synthesize mainAccount=_mainAccount;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void)loginManager:(id)arg1 needVerifyWithImage:(id)arg2 msg:(id)arg3;
- (void)loginManager:(id)arg1 didLoginFailedWithError:(id)arg2;
- (void)loginManager:(id)arg1 didLoginSuccessWithInfo:(id)arg2;
- (void)refreshSigWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentSigWihType:(long long)arg1;
- (void)addSigArray:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

