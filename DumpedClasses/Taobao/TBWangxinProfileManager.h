//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

@interface TBWangxinProfileManager : MKTMsgBusHelp
{
}

+ (id)sharedInstance;
- (void)ampUserUpdated:(id)arg1;
- (void)fetchProfileForPerson:(id)arg1 inTribe:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureOpenIMProfileHandlerWithImKit:(id)arg1;
- (id)init;

@end

