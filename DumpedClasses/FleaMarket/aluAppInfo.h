//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface aluAppInfo : NSObject
{
    NSString *_productId;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_channel;
    NSString *_clientType;
    NSString *_appType;
    NSString *_userAgent;
}

@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end

