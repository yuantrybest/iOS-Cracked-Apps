//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGLocalMusicBackUpBLL : NSObject
{
}

- (void)deleteSongsFromDevice:(id)arg1 withDeleteSongs:(id)arg2 withRepSuccessBlock:(CDUnknownBlockType)arg3 AndException:(CDUnknownBlockType)arg4;
- (void)getSongsFromDevice:(id)arg1 withSongAuth:(id)arg2 WithRepSuccessBlock:(CDUnknownBlockType)arg3 AndException:(CDUnknownBlockType)arg4;
- (void)getDevicesWithWifiOnly:(_Bool)arg1 repSuccessBlock:(CDUnknownBlockType)arg2 andException:(CDUnknownBlockType)arg3;
- (void)getPCDevicesWithWifiOnly:(_Bool)arg1 repSuccessBlock:(CDUnknownBlockType)arg2 andException:(CDUnknownBlockType)arg3;

@end

