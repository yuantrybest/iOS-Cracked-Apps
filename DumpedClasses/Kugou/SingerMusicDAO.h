//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface SingerMusicDAO : BaseHttpDao
{
}

- (id)requestMVWithSingerId:(long long)arg1 andSingerName:(id)arg2 andPage:(long long)arg3 andError:(id *)arg4;
- (id)requestAlbumWithSingerId:(long long)arg1 andPage:(long long)arg2 andError:(id *)arg3;
- (id)requestMusicWithSingerId:(long long)arg1 andPage:(long long)arg2 andSortType:(long long)arg3 andError:(id *)arg4;
- (void)getVideoOfSingerByName:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end

