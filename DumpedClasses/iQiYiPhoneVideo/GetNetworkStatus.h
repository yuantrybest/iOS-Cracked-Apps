//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GetNetworkStatus : NSObject
{
    id _delegate;
    int _netjudgeLocation;
}

+ (id)sharedNetWorkState;
@property(nonatomic) int _netjudgeLocation; // @synthesize _netjudgeLocation;
@property(nonatomic) id _delegate; // @synthesize _delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setDefaultNetHaveReminded;
- (_Bool)NetRemindOrNot;
- (id)init;

@end

