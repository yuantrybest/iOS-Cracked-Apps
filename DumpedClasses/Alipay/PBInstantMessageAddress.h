//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PBInstantMessageAddress : NSObject
{
    NSString *_username;
    NSString *_service;
}

@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqualToValue:(id)arg1;
- (id)description;
- (id)stringForIvar:(id)arg1;
- (id)string;
- (id)initWithUserName:(id)arg1 service:(id)arg2;

@end
