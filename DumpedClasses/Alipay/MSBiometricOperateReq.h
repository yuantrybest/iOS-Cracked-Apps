//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSToString.h"

@class MSTid, NSDictionary, NSString;

@interface MSBiometricOperateReq : MSToString
{
    NSString *_loginId;
    NSString *_deviceId;
    NSString *_deviceVender;
    NSString *_authType;
    NSString *_protocolType;
    NSString *_protocolVersion;
    NSDictionary *_extInfos;
    MSTid *_tid;
}

+ (Class)extInfosElementClass;
@property(retain, nonatomic) MSTid *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *protocolType; // @synthesize protocolType=_protocolType;
@property(retain, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(retain, nonatomic) NSString *deviceVender; // @synthesize deviceVender=_deviceVender;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;

@end
