//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TBHomeConfigManager : NSObject
{
    NSDictionary *_homeOrangeConfig;
}

+ (id)valueInOrangeConfForKey:(id)arg1 defaultValue:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *homeOrangeConfig; // @synthesize homeOrangeConfig=_homeOrangeConfig;
- (void).cxx_destruct;

@end

