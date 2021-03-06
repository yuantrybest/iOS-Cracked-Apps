//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString;

@interface FBSDKLikeActionControllerCache : NSObject <NSSecureCoding>
{
    NSString *_accessTokenString;
    NSMutableDictionary *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *accessTokenString; // @synthesize accessTokenString=_accessTokenString;
- (void).cxx_destruct;
- (void)_prune;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)resetForAccessTokenString:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccessTokenString:(id)arg1;

@end

