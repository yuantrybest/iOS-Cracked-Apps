//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class MQQGameLoginPushInfo, NSData, NSString;

@interface MQQGameLoginPushRequest : MQQSharkBaseRequest
{
    NSString *_uin;
    long long _appid;
    NSString *_qrcodeMd5;
    long long _productAppid;
    NSData *_session;
    unsigned long long _clientIP;
    MQQGameLoginPushInfo *_pushInfo;
}

@property(nonatomic) unsigned long long clientIP; // @synthesize clientIP=_clientIP;
@property(retain, nonatomic) NSData *session; // @synthesize session=_session;
@property(retain, nonatomic) MQQGameLoginPushInfo *pushInfo; // @synthesize pushInfo=_pushInfo;
@property(nonatomic) long long productAppid; // @synthesize productAppid=_productAppid;
@property(retain, nonatomic) NSString *qrcodeMd5; // @synthesize qrcodeMd5=_qrcodeMd5;
@property(nonatomic) long long appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void)didSharkDataFailInAccessLayer;
- (void)didSharkDataFail:(const vector_aa1d262e *)arg1 errCode:(long long)arg2;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)sendRequestWithUin:(id)arg1 appid:(long long)arg2 qrcodeMd5:(id)arg3 productAppid:(long long)arg4;
- (void)dealloc;

@end
