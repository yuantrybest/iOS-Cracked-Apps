//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LISDKAccessToken;

@interface LISDKSession : NSObject
{
    LISDKAccessToken *_accessToken;
}

@property(retain, nonatomic) LISDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)value;
- (_Bool)isValid;

@end
